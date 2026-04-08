/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Board configuration file for SEAL i.MX6ULL platforms
 * Copyright (C) 2020 SEAL AG
 */

#ifndef __SEAL_IMX6ULL_COMMON_H
#define __SEAL_IMX6ULL_COMMON_H

#include "mx6_common.h"

/* UART */
#define CFG_SYS_BAUDRATE_TABLE	{ 115200, 230400, 460800, 921600 }

#define CFG_EXTRA_ENV_SETTINGS \
	"dfu_alt_info=mmc 1=" \
		"spl raw 0x2 0xfe mmcpart 1;" \
		"u-boot raw 0x100 0x1ec0 mmcpart 1;" \
		"u-boot-env raw 0x1fc0 0x40 mmcpart 1\0" \
	"fastboot_raw_partition_spl=0x2 0xfe mmcpart 1\0" \
	"fastboot_raw_partition_uboot=0x100 0x1ec0 mmcpart 1\0" \
	"fastboot_raw_partition_ubootenv=0x1fc0 0x40 mmcpart 1\0" \
	"fastboot_raw_partition_boot=0x2 0x1fbe mmcpart 1\0"

/* Physical Memory Map */
#define PHYS_SDRAM		MMDC0_ARB_BASE_ADDR

#define CFG_SYS_SDRAM_BASE	PHYS_SDRAM
#define CFG_SYS_INIT_RAM_ADDR	IRAM_BASE_ADDR
#define CFG_SYS_INIT_RAM_SIZE	IRAM_SIZE

#endif /* __SEAL_IMX6ULL_COMMON_H */
