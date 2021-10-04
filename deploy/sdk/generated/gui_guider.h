/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *welcome_screen;
	lv_obj_t *welcome_screen_canvas_white;
	lv_obj_t *welcome_screen_rightbtn0;
	lv_obj_t *welcome_screen_rightbtn0_label;
	lv_obj_t *welcome_screen_avlogoimg0;
	lv_obj_t *welcome_screen_leftbtn0;
	lv_obj_t *welcome_screen_leftbtn0_label;
	lv_obj_t *welcome_screen_redbtn0;
	lv_obj_t *welcome_screen_redbtn0_label;
	lv_obj_t *welcome_screen_greenbtn0;
	lv_obj_t *welcome_screen_greenbtn0_label;
	lv_obj_t *welcome_screen_usrtglimg0;
	lv_obj_t *welcome_screen_usruntglimg0;
	lv_obj_t *welcome_screen_userlabel0;
	lv_obj_t *welcome_screen_helplabel0;
	lv_obj_t *welcome_screen_wifilabel0;
	lv_obj_t *welcome_screen_img_5oodt29s;
	lv_obj_t *welcome_screen_bluebtn0;
	lv_obj_t *welcome_screen_bluebtn0_label;
	lv_obj_t *help_screen;
	lv_obj_t *help_screen_canvas_black;
	lv_obj_t *help_screen_img1;
	lv_obj_t *help_screen_imgbtn1;
	lv_obj_t *help_screen_imgbtn1_label;
	lv_obj_t *help_screen_table_functions;
	lv_obj_t *help_screen_helplabel0_3;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_welcome_screen(lv_ui *ui);
void setup_scr_help_screen(lv_ui *ui);
LV_IMG_DECLARE(_Button_Red_DARK_alpha_190x190);
LV_IMG_DECLARE(_Button_Green_alpha_190x190);
LV_IMG_DECLARE(_image008_dark_alpha_130x130);
LV_IMG_DECLARE(_AvnetIcon310x310_alpha_250x250);
LV_IMG_DECLARE(_left_arrow_alpha_150x150);
LV_IMG_DECLARE(_right_arrow_dark_alpha_150x150);
LV_IMG_DECLARE(_Button_Green_DARK_alpha_190x190);
LV_IMG_DECLARE(_maaxBoard01_alpha_499x772);
LV_IMG_DECLARE(_cyan_inactive_button_alpha_100x100);
LV_IMG_DECLARE(_Button_Blue_alpha_190x190);
LV_IMG_DECLARE(_Button_Red_alpha_190x190);
LV_IMG_DECLARE(_IoT_Smart_Asset_Monitoring_G_600ppi_alpha_500x500);
LV_IMG_DECLARE(_right_arrow_alpha_150x150);
LV_IMG_DECLARE(_left_arrow_dark_alpha_150x150);
LV_IMG_DECLARE(_cyan_active_button_alpha_100x100);
LV_IMG_DECLARE(_Button_Blue_DARK_alpha_190x190);
LV_IMG_DECLARE(_image008_alpha_130x130);

#ifdef __cplusplus
}
#endif
#endif