SRC_URI:append = " \
	file://0000-ucm-imx8m-plus-Add-support-update-files.patch \
	file://0001-ucm-imx8m-plus-Add-support-Add-files.patch \
	file://0002-ucm-imx8m-plus-Fix-spl-reset.patch \
	file://0003-ucm-imx8m-plus-spl-eeprom-Enable-DM-mode.patch \
	file://0004-ucm-imx8m-plus-dts-Update-u-boot-device-tree.patch \
	file://0005-ucm-imx8m-plus-spl-Update-the-machine-spl.patch \
	file://0006-ucm-imx8m-plus-config-Update-for-SR.patch \
	file://0007-ucm-imx8m-plus-config-Update-ENV-settings.patch \
	file://0008-ucm-imx8m-plus-dts-Add-tty0-as-a-console.patch \
	file://0009-ucm-imx8m-plus-env-Provide-the-CompuLab-bsp_bootcmd.patch \
	file://0010-ucm-imx8m-plus-conf-Update-boot-environment.patch \
	file://0011-ucm-imx8m-plus-conf-Enable-watchdog.patch \
	file://0012-ucm-imx8m-plus-Kconfig-Add-SYS_I2C_EEPROM_BUS-ADDR.patch \
	file://0013-plat-imx8mp-ddr-Remove-the-specific-SoM-limitation.patch \
	file://0014-compulab-imx8mp-Prepare-for-multi-board-support.patch \
	file://0015-compulab-Add-som-imx8m-plus-support.patch \
	file://0016-watchdog-Add-CONFIG_WATCHDOG_AUTOSTART-option.patch \
	file://0017-som-imx8m-plus-config-Disable-CONFIG_WATCHDOG_AUTOST.patch \
	file://0018-compulab-imx8mp-ddr-Fix-service-gpio-error.patch \
	file://0019-som-imx8m-plus-Update-configs.patch \
	file://0020-som-imx8m-plus-Update-dts.patch \
	file://0021-som-imx8m-plus-Init-usdhc1-with-power-down-pin-low.patch \
	file://0022-imx8m-Addresses-the-SDP-common-board_f.c-955-hang-is.patch \
	file://0023-ucm-imx8m-plus-config-Disable-CONFIG_WATCHDOG_AUTOST.patch \
	file://0024-ucm-imx8m-plus-config-Enable-CONFIG_USB_STORAGE.patch \
	file://0025-compulab-imx8m-plus-Move-NET-settings-to-the-machine.patch \
	file://0026-compulab-imx8m-plus-Add-boot_opt.patch \
	file://0027-som-imx8m-plus-Enable-FEC0-enet-clock.patch \
	file://0028-som-imx8m-plus-dts-Add-phy-reset-for-net-ifaces.patch \
	file://0029-som-imx8m-plus-Set-ethprime-to-eth0.patch \
	file://0030-compulab-eeprom-add-support-for-obtaining-2-nd-mac.patch \
	file://0031-imx8m-plus-Add-board-specific-imx_get_mac_from_fuse.patch \
	file://0032-compulab-imx8mp-Add-CONFIG_ATF_LOAD_ADDR-CONFIG_TEE_.patch \
	file://0033-spi-Add-w25128dw-configuration-string.patch \
	file://0034-som-imx8m-plus-dts-Fix-the-flexspi-flash0-name.patch \
	file://0035-compulab-imx8m-plus-defconfig-Enable-CONFIG_NXP_FSPI.patch \
	file://0036-compulab-imx8mp-ddr-Fix-the-0xff060018-vendore-name.patch \
	file://0037-compulab-imx8mp-dts-Increase-the-temperature-thresho.patch \
	file://0038-compulab-imx8m-plus-Update-bootlist-with-usb.patch \
	file://0039-imx8m-plus-Move-phy-reset-gpio-to-device-tree.patch \
	file://0040-som-imx8m-plus-Remove-excessive-phy-reset.patch \
	file://0041-imx8m-plus-Add-Ethernet-PHY-RTL8211E-VB-CG-support.patch \
	file://0042-imx8m-plus-Enable-CMD_MTEST.patch \
	file://0043-som-imx8m-plus-Update-the-CONFIG_SYS_PROMPT.patch \
	file://0044-ucm-imx8m-plus-Update-the-CONFIG_SYS_PROMPT.patch \
	file://0045-compulab-imx8mp-dts-Increase-the-soc-temperature-thr.patch \
	file://0046-cpu-Change-minc-maxc-default-values.patch \
	file://0047-imx8mp-defconfig-Enable-CONFIG_CMD_PMIC.patch \
	file://0048-compulab-eeprom-Add-ldo4-get-set-functions.patch \
	file://0049-imx8mp-spl-Add-ldo4-init-support.patch \
	file://0050-imx8mp-board-Add-ldo4-command.patch \
	file://0051-imx8mp-board-Add-dp_pmic_ldo4.patch \
	file://0052-imx8mp-spl-Improve-the-ldo4-set-value-logics.patch \
	file://0053-compulab-eeprom-Issue-net_random_ethaddr-if-eeprom-i.patch \
	file://0054-ucm-imx8m-plus-Issue-cl_eeprom_read_n_mac_addr-for-m.patch \
	file://0055-ucm-imx8m-plus-Allow-usieng-UART1-as-debug-console.patch \
	file://0056-compulab-Add-iot-gate-imx8plus-support.patch \
	file://0057-iot-gate-imx8plus-restore-default-network-interfaces.patch \
	file://0058-iot-gate-imx8plus-fix-temperature-limits.patch \
	file://0059-imx8mp-spl-Remove-the-management-gpio-usage.patch \
	file://0060-iot-gate-imx8plus-eeprom-Read-mac-from-the-dev_id-of.patch \
	file://0061-imx8mp-ddr-Fix-memory-unit-print-size.patch \
	file://0062-imx8mp-ddr-Issue-reset-from-the-main-function-only.patch \
	file://0063-imx8mp-ddr-Pass-the-dram-info-from-SPL-to-U-Boot.patch \
	file://0064-eeprom-Add-eeprom-read-write-functions-for-eeprom-me.patch \
	file://0065-imx8mp-board-Add-ddr-command.patch \
	file://0066-imx8mp-ddr-Refactoring-the-ddr-discovery-logic.patch \
	file://0067-compulab-imx8m-plus-Reduce-the-SPL-bss-and-stack-siz.patch \
	file://0068-imx8mp-defconfig-Disable-SPL_FIT_GENERATOR.patch \
	file://0069-imx8mp-ddr-Add-2G-sufix-to-timing-parameters.patch \
	file://0070-imx8mp-ddr-Add-Nanya-2G-support.patch \
	file://0071-imx8mp-ddr-Make-the-subind-equal-to-dram-size-in-Gb.patch \
	file://0072-imx8mp-ddr-Add-Samsung-4G-1G-support.patch \
	file://0073-imx8mp-ddr-Add-Samsung-1G-4000Mhz-support.patch \
	file://0074-ucm-imx8m-plus-usb_hub_rest-Add-iot-gate-imx8plus-su.patch \
	file://0075-compulab-imx8mp-Add-a-dram_subset-env-variable.patch \
	file://0076-imx8mp-board-Add-ddr-command-version.patch \
	file://0077-imx8mp-config-Introduced-D1D8-D2D4-configs.patch \
	file://0078-mach-imx-Suppress-TMU-temperature-message.patch \
	file://0079-iot-gate-imx8plus-config-Enable-TMU_IMX.patch \
	file://0080-mx8mp-ddr-Fix-Samsung-4G-timing-issue.patch \
	file://0081-compulab-imx8mp-board-introduce-board_vendor_late_in.patch \
	file://0082-iot-gate-imx8plus-enable-i2c5-bus.patch \
	file://0083-iot-gate-imx8plus-detect-expansion-board-in-M.2-slot.patch \
	file://0084-iot-gate-imx8plus-fix-baseboard-EEPROM-i2c-bus-num-a.patch \
	file://0085-compulab-som-imx8m-plus-Revision-1.1-update.patch \
	file://0086-compulab-imx8m-plus-Fix-bsp-boot-device-order.patch \
	file://0087-video-startek-ili9881c-Disable-video-if-device-disco.patch \
	file://0088-compulab-imx8mp-board-Remove-legacy-dram_init_banksi.patch \
	file://0089-compulab-imx8mp-Introduce-platform-specific-get_phy_.patch \
	file://0090-som-imx8m-plus-Introduce-board_save_phyaddr-and-fdt_.patch \
	file://0091-compulab-imx8mp-Introduce-board_save_phyaddr-and-fdt.patch \
	file://0092-som-imx8m-plus-Enable-phy-address-discovery-logics.patch \
	file://0093-compulab-imx8mp-Update-u-boot-prompt.patch \
	file://0094-compulab-imx8mp-Report-on-phy-0-except-for-som-imx8m.patch \
	file://0095-ucm-imx8m-plus-Enable-phy-address-discovery-logics.patch \
	file://0096-iot-gate-imx8plus-Enable-phy-address-discovery-logic.patch \
	file://0097-som-imx8m-plus-Enable-FEC_QUIRK_ENET_MAC.patch \
	file://0098-ucm-imx8m-plus-Update-defconfig.patch \
	file://0099-ucm-imx8m-plus-Update-Kconfig.patch \
	file://0100-iot-gate-imx8plus-Update-defconfig.patch \
	file://0101-iot-gate-imx8plus-Update-Kconfig.patch \
	file://0102-som-imx8m-plus-Update-Kconfig.patch \
	file://0103-compulab-Update-Kconfig.patch \
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

SRC_URI:append = " \
        file://common.cfg \
"

SRC_URI:append = " \
        ${@bb.utils.contains('DRAM_CONF', 'd2d4', 'file://d2d4.cfg', 'file://d1d8.cfg', d)} \
"
