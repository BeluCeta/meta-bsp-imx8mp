SRC_URI:append = " \
	file://0000-Merge-from-2021.04.patch \
	file://0001-imx8m-compulab-Update-common-config.patch \
	file://0002-ucm-imx8m-plus-Updated-defconfig.patch \
	file://0003-som-imx8m-plus-Updated-defconfig.patch \
	file://0004-iot-gate-imx8plus-Updated-defconfig.patch \
	file://0005-imx8mp-compulab-Add-binman-layout.patch \
	file://0007-imx8mp-spl-Remove-the-management-gpio-usage.patch \
	file://0008-imx8m-compulab-Fix-kernel_addr_r-value.patch \
	file://0009-iot-gate-imx8plus-eeprom-Read-mac-from-the-dev_id-of.patch \
	file://0010-compulab-imx8mp-binman-Fix-binman-dtsi.patch \
	file://0011-compulab-imx8mp-Update-defconfig-s.patch \
"

SRC_URI:append = " \
	file://mp.cfg \
"

SRC_URI:append:binman = " \
	file://0006-imx8mp-compulab-Enable-binman.patch \
"

SRC_URI:append:ucm-imx8m-plus = " \
	file://ucm-imx8m-plus_defconfig \
"

SRC_URI:append:som-imx8m-plus = " \
	file://som-imx8m-plus_defconfig \
"

SRC_URI:append:iot-gate-imx8plus = " \
	file://iot-gate-imx8plus_defconfig \
"

do_compile:prepend () {
    cd ${S}
    cp ${S}/configs/${MACHINE}_defconfig ${S}/configs/compulab_defconfig
    ${S}/scripts/kconfig/merge_config.sh  -O ${S}/configs/ -m ${S}/configs/${MACHINE}_defconfig ${WORKDIR}/*.cfg
    mv ${S}/configs/.config ${S}/configs/${MACHINE}_defconfig
    cd -
    oe_runmake ${MACHINE}_defconfig
    mv ${S}/configs/compulab_defconfig ${S}/configs/${MACHINE}_defconfig
}
