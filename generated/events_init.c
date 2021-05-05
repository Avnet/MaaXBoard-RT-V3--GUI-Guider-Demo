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

static void welcome_screen_redbtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_text_font(guider_ui.welcome_screen_redlabel0, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_20);
		lv_label_set_text(guider_ui.welcome_screen_redlabel0, "Red LED active");
		lv_obj_set_hidden(guider_ui.welcome_screen_usruntglimg0, true);
	}
		break;
	default:
		break;
	}
}

static void welcome_screen_greenbtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_text_font(guider_ui.welcome_screen_greenlabel0, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_20);
		lv_label_set_text(guider_ui.welcome_screen_greenlabel0, "Green LED active");
	}
		break;
	default:
		break;
	}
}

static void welcome_screen_bluebtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_set_style_local_text_font(guider_ui.welcome_screen_bluelabel0, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_simsun_20);
		lv_label_set_text(guider_ui.welcome_screen_bluelabel0, "Blue LED active");
	}
		break;
	default:
		break;
	}
}

void events_init_welcome_screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->welcome_screen_redbtn0, welcome_screen_redbtn0event_handler);
	lv_obj_set_event_cb(ui->welcome_screen_greenbtn0, welcome_screen_greenbtn0event_handler);
	lv_obj_set_event_cb(ui->welcome_screen_bluebtn0, welcome_screen_bluebtn0event_handler);
}

static void screen_imgbtn1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_screen2(&guider_ui);
		lv_scr_load(guider_ui.screen2);
	}
		break;
	default:
		break;
	}
}

void events_init_screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->screen_imgbtn1, screen_imgbtn1event_handler);
}
