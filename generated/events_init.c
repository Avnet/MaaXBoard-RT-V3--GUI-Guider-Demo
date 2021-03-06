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

static void screen0_MENU_imgbtn_1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen1_LEDs))
			setup_scr_screen1_LEDs(&guider_ui);
		lv_scr_load_anim(guider_ui.screen1_LEDs, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_imgbtn_2event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen4_AV))
			setup_scr_screen4_AV(&guider_ui);
		lv_scr_load_anim(guider_ui.screen4_AV, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_imgbtn_3event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen2_WIFI))
			setup_scr_screen2_WIFI(&guider_ui);
		lv_scr_load_anim(guider_ui.screen2_WIFI, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_imgbtn_4event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen5_SYSTEM))
			setup_scr_screen5_SYSTEM(&guider_ui);
		lv_scr_load_anim(guider_ui.screen5_SYSTEM, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_imgbtn_5event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen3_USB))
			setup_scr_screen3_USB(&guider_ui);
		lv_scr_load_anim(guider_ui.screen3_USB, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen0_MENU_imgbtn_6event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen6_HELP))
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
	lv_obj_set_event_cb(ui->screen0_MENU_imgbtn_1, screen0_MENU_imgbtn_1event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_imgbtn_2, screen0_MENU_imgbtn_2event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_imgbtn_3, screen0_MENU_imgbtn_3event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_imgbtn_4, screen0_MENU_imgbtn_4event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_imgbtn_5, screen0_MENU_imgbtn_5event_handler);
	lv_obj_set_event_cb(ui->screen0_MENU_imgbtn_6, screen0_MENU_imgbtn_6event_handler);
}

static void screen1_LEDs_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
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
		if (!lv_debug_check_obj_valid(guider_ui.screen2_WIFI))
			setup_scr_screen2_WIFI(&guider_ui);
		lv_scr_load_anim(guider_ui.screen2_WIFI, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen1_LEDs_redbtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_hidden(guider_ui.screen1_LEDs_led_red_off, true);
	}
		break;
	default:
		break;
	}
}

static void screen1_LEDs_greenbtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_hidden(guider_ui.screen1_LEDs_led_green_off, true);
	}
		break;
	default:
		break;
	}
}

static void screen1_LEDs_bluebtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_hidden(guider_ui.screen1_LEDs_led_blue_off, true);
	}
		break;
	default:
		break;
	}
}

static void screen1_LEDs_home_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
			setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
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
	lv_obj_set_event_cb(ui->screen1_LEDs_redbtn0, screen1_LEDs_redbtn0event_handler);
	lv_obj_set_event_cb(ui->screen1_LEDs_greenbtn0, screen1_LEDs_greenbtn0event_handler);
	lv_obj_set_event_cb(ui->screen1_LEDs_bluebtn0, screen1_LEDs_bluebtn0event_handler);
	lv_obj_set_event_cb(ui->screen1_LEDs_home_btn, screen1_LEDs_home_btnevent_handler);
}

static void screen2_WIFI_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen1_LEDs))
			setup_scr_screen1_LEDs(&guider_ui);
		lv_scr_load_anim(guider_ui.screen1_LEDs, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
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
		if (!lv_debug_check_obj_valid(guider_ui.screen3_USB))
			setup_scr_screen3_USB(&guider_ui);
		lv_scr_load_anim(guider_ui.screen3_USB, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen2_WIFI_home_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
			setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen2_WIFI_ssid_refresh_imgbtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen2_WIFI_ssid_refresh_imgbtn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
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
	lv_obj_set_event_cb(ui->screen2_WIFI_home_btn, screen2_WIFI_home_btnevent_handler);
	lv_obj_set_event_cb(ui->screen2_WIFI_ssid_refresh_imgbtn, screen2_WIFI_ssid_refresh_imgbtnevent_handler);
}

static void screen3_USB_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen2_WIFI))
			setup_scr_screen2_WIFI(&guider_ui);
		lv_scr_load_anim(guider_ui.screen2_WIFI, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
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
		if (!lv_debug_check_obj_valid(guider_ui.screen4_AV))
			setup_scr_screen4_AV(&guider_ui);
		lv_scr_load_anim(guider_ui.screen4_AV, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen3_USB_home_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
			setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen3_USB_kbd_imgbtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen3_USB_kbd_imgbtn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	}
		break;
	default:
		break;
	}
}

static void screen3_USB_mouse_imgbtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen3_USB_mouse_imgbtn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	}
		break;
	default:
		break;
	}
}

static void screen3_USB_i2c_scan_imgbtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen3_USB_i2c_scan_imgbtn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	}
		break;
	default:
		break;
	}
}

static void screen3_USB_i2c_ddlistevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen3_USB_i2c_ddlist, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
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
	lv_obj_set_event_cb(ui->screen3_USB_home_btn, screen3_USB_home_btnevent_handler);
	lv_obj_set_event_cb(ui->screen3_USB_kbd_imgbtn, screen3_USB_kbd_imgbtnevent_handler);
	lv_obj_set_event_cb(ui->screen3_USB_mouse_imgbtn, screen3_USB_mouse_imgbtnevent_handler);
	lv_obj_set_event_cb(ui->screen3_USB_i2c_scan_imgbtn, screen3_USB_i2c_scan_imgbtnevent_handler);
	lv_obj_set_event_cb(ui->screen3_USB_i2c_ddlist, screen3_USB_i2c_ddlistevent_handler);
}

static void screen4_AV_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen3_USB))
			setup_scr_screen3_USB(&guider_ui);
		lv_scr_load_anim(guider_ui.screen3_USB, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
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
		if (!lv_debug_check_obj_valid(guider_ui.screen5_SYSTEM))
			setup_scr_screen5_SYSTEM(&guider_ui);
		lv_scr_load_anim(guider_ui.screen5_SYSTEM, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen4_AV_home_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
			setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen4_AV_mic1_cbevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen4_AV_mic1_cb, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	}
		break;
	default:
		break;
	}
}

static void screen4_AV_mic2_cbevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen4_AV_mic2_cb, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	}
		break;
	default:
		break;
	}
}

static void screen4_AV_mic3_cbevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen4_AV_mic3_cb, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	}
		break;
	default:
		break;
	}
}

static void screen4_AV_mic4_cbevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_VALUE_CHANGED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen4_AV_mic4_cb, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
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
	lv_obj_set_event_cb(ui->screen4_AV_home_btn, screen4_AV_home_btnevent_handler);
	lv_obj_set_event_cb(ui->screen4_AV_mic1_cb, screen4_AV_mic1_cbevent_handler);
	lv_obj_set_event_cb(ui->screen4_AV_mic2_cb, screen4_AV_mic2_cbevent_handler);
	lv_obj_set_event_cb(ui->screen4_AV_mic3_cb, screen4_AV_mic3_cbevent_handler);
	lv_obj_set_event_cb(ui->screen4_AV_mic4_cb, screen4_AV_mic4_cbevent_handler);
}

static void screen5_SYSTEM_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen4_AV))
			setup_scr_screen4_AV(&guider_ui);
		lv_scr_load_anim(guider_ui.screen4_AV, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
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
		if (!lv_debug_check_obj_valid(guider_ui.screen6_HELP))
			setup_scr_screen6_HELP(&guider_ui);
		lv_scr_load_anim(guider_ui.screen6_HELP, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen5_SYSTEM_home_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
			setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen5_SYSTEM_custom_imgbtnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_obj_set_style_local_bg_color(guider_ui.screen5_SYSTEM_custom_imgbtn, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
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
	lv_obj_set_event_cb(ui->screen5_SYSTEM_home_btn, screen5_SYSTEM_home_btnevent_handler);
	lv_obj_set_event_cb(ui->screen5_SYSTEM_custom_imgbtn, screen5_SYSTEM_custom_imgbtnevent_handler);
}

static void screen6_HELP_left_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen5_SYSTEM))
			setup_scr_screen5_SYSTEM(&guider_ui);
		lv_scr_load_anim(guider_ui.screen5_SYSTEM, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen6_HELP_right_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
			setup_scr_screen0_MENU(&guider_ui);
		lv_scr_load_anim(guider_ui.screen0_MENU, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

static void screen6_HELP_home_btnevent_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		if (!lv_debug_check_obj_valid(guider_ui.screen0_MENU))
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
	lv_obj_set_event_cb(ui->screen6_HELP_right_btn, screen6_HELP_right_btnevent_handler);
	lv_obj_set_event_cb(ui->screen6_HELP_home_btn, screen6_HELP_home_btnevent_handler);
}
