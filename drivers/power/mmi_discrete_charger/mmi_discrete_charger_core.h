/*
 * Copyright (C) 2020 Motorola Mobility LLC
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
 #ifndef __MMI_DISCRETE_CHARGER_CORE_H__
#define __MMI_DISCRETE_CHARGER_CORE_H__

#include <linux/extcon-provider.h>
#include "mmi_charger.h"

#define MMI_HB_VOTER			"MMI_HB_VOTER"
#define USER_VOTER			"USER_VOTER"
#define USB_PSY_VOTER			"USB_PSY_VOTER"
#define BATT_PROFILE_VOTER		"BATT_PROFILE_VOTER"
#define THERMAL_DAEMON_VOTER		"THERMAL_DAEMON_VOTER"
#define WBC_VOTER			"WBC_VOTER"
#define SW_ICL_MAX_VOTER		"SW_ICL_MAX_VOTER"
#define HW_LIMIT_VOTER			"HW_LIMIT_VOTER"
#define DEFAULT_VOTER			"DEFAULT_VOTER"

#define SDP_100_MA			100000
#define SDP_CURRENT_UA			500000
#define CDP_CURRENT_UA			1500000
#define DCP_CURRENT_UA			1500000
#define HVDCP_CURRENT_UA		3000000
#define TYPEC_DEFAULT_CURRENT_UA	900000
#define TYPEC_MEDIUM_CURRENT_UA		1500000
#define TYPEC_HIGH_CURRENT_UA		3000000

static const unsigned int mmi_discrete_extcon_cable[] = {
	EXTCON_USB,
	EXTCON_USB_HOST,
	EXTCON_NONE,
};

/* Indicates USB Type-C CC connection status */
enum power_supply_typec_mode {
	MMI_POWER_SUPPLY_TYPEC_NONE,

	/* Acting as source */
	MMI_POWER_SUPPLY_TYPEC_SINK,		/* Rd only */
	MMI_POWER_SUPPLY_TYPEC_SINK_POWERED_CABLE,	/* Rd/Ra */
	MMI_POWER_SUPPLY_TYPEC_SINK_DEBUG_ACCESSORY,/* Rd/Rd */
	MMI_POWER_SUPPLY_TYPEC_SINK_AUDIO_ADAPTER,	/* Ra/Ra */
	MMI_POWER_SUPPLY_TYPEC_POWERED_CABLE_ONLY,	/* Ra only */

	/* Acting as sink */
	MMI_POWER_SUPPLY_TYPEC_SOURCE_DEFAULT,	/* Rp default */
	MMI_POWER_SUPPLY_TYPEC_SOURCE_MEDIUM,	/* Rp 1.5A */
	MMI_POWER_SUPPLY_TYPEC_SOURCE_HIGH,		/* Rp 3A */
	MMI_POWER_SUPPLY_TYPEC_NON_COMPLIANT,
};

struct mmi_discrete_chg_client {
	struct mmi_discrete_charger		*chip;
	struct mmi_battery_info		batt_info;
	struct mmi_charger_cfg		chg_cfg;
	struct mmi_charger_driver	*driver;
	struct power_supply		*client_batt_psy;
	u32				chrg_taper_cnt;
};

struct mmi_discrete_charger {
	struct device		*dev;
	char				*name;
	struct power_supply	*mmi_psy;
	struct power_supply	*batt_psy;
	struct power_supply	*usb_psy;
	struct power_supply	*bms_psy;
	struct power_supply	*charger_psy;
	struct power_supply	*usb_port_psy;
	struct power_supply	*dc_psy;
	struct power_supply 	*wls_psy;

	struct votable 		*chg_disable_votable;
	struct votable			*fcc_votable;
	struct votable			*fv_votable;
	struct votable			*usb_icl_votable;
	struct votable			*dc_suspend_votable;

	struct delayed_work	charger_work;
	struct mmi_charger_info	chg_info;
	struct mmi_charger_constraint	constraint;
	int					chg_client_num;
	struct mmi_discrete_chg_client	*chg_clients;

	struct charger_device	*master_chg_dev;
	struct notifier_block	master_chg_nb;

	bool			vbus_enabled;
	int			real_charger_type;
	int 			hvdcp2_max_icl_ua;

	/* extcon for VBUS / ID notification to USB for type-c only */
	struct extcon_dev	*extcon;

	/*PD*/
/*	struct usbpd	*pd_handle;
	int			pd_current_pdo;
*/	int			pd_active;
	bool			pd_not_supported;

	int			dc_cl_ma;
	int			batt_profile_fv_uv;
	int			batt_profile_fcc_ua;
	int			hw_max_icl_ua;
	int			otg_cl_ua;

	/*qc3.5*/
	bool			qc3p5_detected;

	bool			*debug_enabled;
	void			*ipc_log;

	/* cached status */
	int			thermal_levels;
	int			system_temp_level;
	int			*thermal_mitigation;
	int			typec_mode;
	bool			use_extcon;
};

#endif