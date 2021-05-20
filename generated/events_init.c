/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl/lvgl.h"

void events_init(lv_ui *ui)
{
}

static void screen1_LEDs_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen1_LEDs_right_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		setup_scr_screen2_WIFI(&guider_ui);
		lv_scr_load_anim(guider_ui.screen2_WIFI, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen1_LEDs(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen1_LEDs_left_btn, screen1_LEDs_left_btnevent_handler);
	lv_obj_set_event_cb(ui->screen1_LEDs_right_btn, screen1_LEDs_right_btnevent_handler);
}

static void screen0_MENU_btn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen1_LEDs(&guider_ui);
		lv_scr_load_anim(guider_ui.screen1_LEDs, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_btn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen2_WIFI(&guider_ui);
		lv_scr_load_anim(guider_ui.screen2_WIFI, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_btn_3event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen3_USB(&guider_ui);
		lv_scr_load_anim(guider_ui.screen3_USB, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_btn_4event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen4_AV(&guider_ui);
		lv_scr_load_anim(guider_ui.screen4_AV, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_btn_5event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen5_SYSTEM(&guider_ui);
		lv_scr_load_anim(guider_ui.screen5_SYSTEM, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_btn_6event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen6_HELP(&guider_ui);
		lv_scr_load_anim(guider_ui.screen6_HELP, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen0_MENU(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen0_MENU_btn_1, screen0_MENU_btn_1event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_btn_2, screen0_MENU_btn_2event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_btn_3, screen0_MENU_btn_3event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_btn_4, screen0_MENU_btn_4event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_btn_5, screen0_MENU_btn_5event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_btn_6, screen0_MENU_btn_6event_handler);
}

static void screen2_WIFI_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen2_WIFI_right_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		setup_scr_screen3_USB(&guider_ui);
		lv_scr_load_anim(guider_ui.screen3_USB, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen2_WIFI(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen2_WIFI_left_btn, screen2_WIFI_left_btnevent_handler);
	lv_obj_set_event_cb(ui->screen2_WIFI_right_btn, screen2_WIFI_right_btnevent_handler);
}

static void screen3_USB_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen3_USB_right_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		setup_scr_screen4_AV(&guider_ui);
		lv_scr_load_anim(guider_ui.screen4_AV, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen3_USB(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen3_USB_left_btn, screen3_USB_left_btnevent_handler);
	lv_obj_set_event_cb(ui->screen3_USB_right_btn, screen3_USB_right_btnevent_handler);
}

static void screen4_AV_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen4_AV_right_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		setup_scr_screen5_SYSTEM(&guider_ui);
		lv_scr_load_anim(guider_ui.screen5_SYSTEM, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen4_AV(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen4_AV_left_btn, screen4_AV_left_btnevent_handler);
	lv_obj_set_event_cb(ui->screen4_AV_right_btn, screen4_AV_right_btnevent_handler);
}

static void screen5_SYSTEM_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen5_SYSTEM_right_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		setup_scr_screen1_LEDs(&guider_ui);
		lv_scr_load_anim(guider_ui.screen1_LEDs, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen5_SYSTEM(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen5_SYSTEM_left_btn, screen5_SYSTEM_left_btnevent_handler);
	lv_obj_set_event_cb(ui->screen5_SYSTEM_right_btn, screen5_SYSTEM_right_btnevent_handler);
}

static void screen6_HELP_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_screen6_HELP(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen6_HELP_left_btn, screen6_HELP_left_btnevent_handler);
}
