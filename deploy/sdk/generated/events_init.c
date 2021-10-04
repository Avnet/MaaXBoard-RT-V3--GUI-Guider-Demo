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

static void welcome_screen_leftbtn0event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_RELEASED:
	{
		lv_obj_clean(lv_scr_act());
		setup_scr_help_screen(&guider_ui);
		lv_scr_load(guider_ui.help_screen);
	}
		break;
	default:
		break;
	}
}

void events_init_welcome_screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->welcome_screen_leftbtn0, welcome_screen_leftbtn0event_handler);
}

static void help_screen_imgbtn1event_handler(lv_obj_t * obj, lv_event_t event)
{
	switch (event)
	{
	case LV_EVENT_PRESSED:
	{
		setup_scr_welcome_screen(&guider_ui);
		lv_scr_load_anim(guider_ui.welcome_screen, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	}
		break;
	default:
		break;
	}
}

void events_init_help_screen(lv_ui *ui)
{
	lv_obj_set_event_cb(ui->help_screen_imgbtn1, help_screen_imgbtn1event_handler);
}
