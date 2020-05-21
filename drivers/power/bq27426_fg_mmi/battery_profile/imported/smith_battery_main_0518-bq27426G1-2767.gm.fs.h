/*****************************************************************************
* Copyright 2010 Texas Instruments Corporation, All Rights Reserved.
* TI makes NO WARRANTY as to software products, which are supplied "AS-IS"
*****************************************************************************/

/*****************************************************************************
*     This code is automatically generated from bqfs/dffs file.              *
*          DO NOT MODIFY THIS FILE DIRECTLY                                  *
*****************************************************************************/

//this file is generated from smith_battery_main_0426_2_02-bq27426G1-2767.gm.fs at Wed Feb  5 16:23:29 2020

#ifndef __MAIN_BQFS_FILE__
#define __MAIN_BQFS_FILE__

#include "bqfs_cmd_type.h"

const bqfs_cmd_t smith_main_bqfs_image[] = {
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x01, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x26, 0x04}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x02, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x02, 0x02}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x13, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 1100},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x27, 0x67, 0x11, 0x59, 0xDF, 0xE0, 0xE3, 0xE2, 0xE0, 0xE0, 0xE0, 0xE0, 0xE1, 0xE3, 0xE3, 0xE4, 0xE5, 0xE7, 0xE9, 0xE4, 0xE4, 0xE5, 0xE3, 0xF0, 0xEF, 0xF5, 0xF2, 0xF7, 0xF6, 0xF9, 0xF9, 0xFA}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x94}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x94}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFC, 0xF6, 0xF6, 0xF2, 0xF1, 0xEF, 0xF2, 0xFE, 0xFA, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFB}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x53, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xFB}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFE, 0x86, 0x03, 0xF7, 0xED, 0x00, 0x04, 0x05, 0x0E, 0xFF, 0x10, 0x03, 0xF7, 0x05, 0x07, 0x02, 0xFE, 0x0B, 0x28, 0x23, 0x01, 0xE1, 0x00, 0x16, 0xE6, 0x1D, 0xEE, 0x00, 0xF6, 0xEB, 0xC0, 0x9C}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xEC}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xEC}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xCD, 0xDD, 0x1D, 0x22, 0xCE, 0x52, 0x0A, 0x54, 0xFA, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x54, 0x01}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x1D}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x55, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFF, 0x52, 0x02, 0x06, 0x01, 0xFE, 0xFE, 0x08, 0x03, 0xFD, 0x03, 0x01, 0xFD, 0x04, 0x13, 0x45, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x33}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x55, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x33}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6C, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0xFE, 0xCA, 0x02, 0x02, 0x04, 0x01, 0x17, 0xEA, 0x06, 0xF0, 0xFE, 0x00, 0x01, 0xF9, 0xDF, 0xAD, 0xF3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xC0}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6C, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xC0}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x00, 0x28, 0x00, 0x28, 0x00, 0x2C, 0x00, 0x37, 0x00, 0x46, 0x00, 0x2A, 0x00, 0x32, 0x00, 0x2A, 0x00, 0x29, 0x00, 0x29, 0x00, 0x2D, 0x00, 0x2E, 0x00, 0x37, 0x00, 0x4E, 0x00, 0xA8, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA6}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x59, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xA6}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x05, 0x05, 0x0E, 0xE5, 0x0E, 0xBA, 0x11, 0x59, 0x11, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x98}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x6D, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0x98}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x51, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x01, 0x39, 0x00, 0xD1, 0x01, 0xF6, 0x00, 0x3C, 0x3C, 0x01, 0x00, 0x00, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xF3}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x51, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xF3}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x52, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x40,
		.data		= {.bytes = {0x40, 0x00, 0x00, 0x00, 0x00, 0x81, 0x04, 0xE7, 0x12, 0xF8, 0x0B, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x03, 0xE8, 0x01, 0x01, 0xF6, 0x00, 0x0A, 0xFF, 0xCE, 0xFF, 0xCE, 0x00, 0x01, 0x00}},
		.data_len	= 32,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xEA}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 10},
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x3E,
		.data		= {.bytes = {0x52, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_C,
		.addr		= 0xAA,
		.reg		= 0x60,
		.data		= {.bytes = {0xEA}},
		.data_len	= 1,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x00, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_W,
		.addr		= 0xAA,
		.reg		= 0x00,
		.data		= {.bytes = {0x42, 0x00}},
		.data_len	= 2,
	},
	{
		.cmd_type	= CMD_X,
		.data		= {.delay = 2000},
	},
};
//end of const bqfs_cmd_t bqfs_image[]
#endif