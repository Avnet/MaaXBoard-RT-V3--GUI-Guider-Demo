/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_welcome_screen(lv_ui *ui){

	//Write codes welcome_screen
	ui->welcome_screen = lv_obj_create(NULL, NULL);

	//Write codes welcome_screen_canvas_white
	ui->welcome_screen_canvas_white = lv_canvas_create(ui->welcome_screen, NULL);

	//Write style LV_CANVAS_PART_MAIN for welcome_screen_canvas_white
	static lv_style_t style_welcome_screen_canvas_white_main;
	lv_style_init(&style_welcome_screen_canvas_white_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_canvas_white_main
	lv_style_set_image_recolor(&style_welcome_screen_canvas_white_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_canvas_white_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_canvas_white, LV_CANVAS_PART_MAIN, &style_welcome_screen_canvas_white_main);
	lv_obj_set_pos(ui->welcome_screen_canvas_white, 0, 0);
	lv_obj_set_size(ui->welcome_screen_canvas_white, 720, 1280);
	lv_color_t *buf_welcome_screen_canvas_white = (lv_color_t*)lv_mem_alloc(720*1280*4);
	lv_canvas_set_buffer(ui->welcome_screen_canvas_white, buf_welcome_screen_canvas_white, 720, 1280, LV_IMG_CF_TRUE_COLOR);

	//Write codes welcome_screen_rightbtn0
	ui->welcome_screen_rightbtn0 = lv_imgbtn_create(ui->welcome_screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for welcome_screen_rightbtn0
	static lv_style_t style_welcome_screen_rightbtn0_main;
	lv_style_init(&style_welcome_screen_rightbtn0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_rightbtn0_main
	lv_style_set_text_color(&style_welcome_screen_rightbtn0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_welcome_screen_rightbtn0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_rightbtn0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_rightbtn0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_rightbtn0, LV_IMGBTN_PART_MAIN, &style_welcome_screen_rightbtn0_main);
	lv_obj_set_pos(ui->welcome_screen_rightbtn0, 565, 5);
	lv_obj_set_size(ui->welcome_screen_rightbtn0, 150, 150);
	lv_imgbtn_set_src(ui->welcome_screen_rightbtn0,LV_BTN_STATE_RELEASED,&_right_arrow_alpha_150x150);
	lv_imgbtn_set_src(ui->welcome_screen_rightbtn0,LV_BTN_STATE_PRESSED,&_right_arrow_dark_alpha_150x150);

	//Write codes welcome_screen_avlogoimg0
	ui->welcome_screen_avlogoimg0 = lv_img_create(ui->welcome_screen, NULL);

	//Write style LV_IMG_PART_MAIN for welcome_screen_avlogoimg0
	static lv_style_t style_welcome_screen_avlogoimg0_main;
	lv_style_init(&style_welcome_screen_avlogoimg0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_avlogoimg0_main
	lv_style_set_image_recolor(&style_welcome_screen_avlogoimg0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_avlogoimg0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_avlogoimg0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_avlogoimg0, LV_IMG_PART_MAIN, &style_welcome_screen_avlogoimg0_main);
	lv_obj_set_pos(ui->welcome_screen_avlogoimg0, 229, 22);
	lv_obj_set_size(ui->welcome_screen_avlogoimg0, 250, 250);
	lv_obj_set_click(ui->welcome_screen_avlogoimg0, true);
	lv_img_set_src(ui->welcome_screen_avlogoimg0,&_AvnetIcon310x310_alpha_250x250);
	lv_img_set_pivot(ui->welcome_screen_avlogoimg0, 0,0);
	lv_img_set_angle(ui->welcome_screen_avlogoimg0, 0);

	//Write codes welcome_screen_leftbtn0
	ui->welcome_screen_leftbtn0 = lv_imgbtn_create(ui->welcome_screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for welcome_screen_leftbtn0
	static lv_style_t style_welcome_screen_leftbtn0_main;
	lv_style_init(&style_welcome_screen_leftbtn0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_leftbtn0_main
	lv_style_set_text_color(&style_welcome_screen_leftbtn0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_welcome_screen_leftbtn0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_leftbtn0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_leftbtn0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_leftbtn0, LV_IMGBTN_PART_MAIN, &style_welcome_screen_leftbtn0_main);
	lv_obj_set_pos(ui->welcome_screen_leftbtn0, 3, 3);
	lv_obj_set_size(ui->welcome_screen_leftbtn0, 150, 150);
	lv_imgbtn_set_src(ui->welcome_screen_leftbtn0,LV_BTN_STATE_RELEASED,&_left_arrow_alpha_150x150);
	lv_imgbtn_set_src(ui->welcome_screen_leftbtn0,LV_BTN_STATE_PRESSED,&_left_arrow_dark_alpha_150x150);

	//Write codes welcome_screen_redbtn0
	ui->welcome_screen_redbtn0 = lv_imgbtn_create(ui->welcome_screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for welcome_screen_redbtn0
	static lv_style_t style_welcome_screen_redbtn0_main;
	lv_style_init(&style_welcome_screen_redbtn0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_redbtn0_main
	lv_style_set_text_color(&style_welcome_screen_redbtn0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_welcome_screen_redbtn0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_redbtn0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_redbtn0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_redbtn0, LV_IMGBTN_PART_MAIN, &style_welcome_screen_redbtn0_main);
	lv_obj_set_pos(ui->welcome_screen_redbtn0, 28, 1050);
	lv_obj_set_size(ui->welcome_screen_redbtn0, 190, 190);
	lv_imgbtn_set_src(ui->welcome_screen_redbtn0,LV_BTN_STATE_RELEASED,&_Button_Red_DARK_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_redbtn0,LV_BTN_STATE_PRESSED,&_Button_Red_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_redbtn0,LV_BTN_STATE_CHECKED_RELEASED,&_Button_Red_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_redbtn0,LV_BTN_STATE_CHECKED_PRESSED,&_Button_Red_DARK_alpha_190x190);
	lv_imgbtn_set_checkable(ui->welcome_screen_redbtn0, true);

	//Write codes welcome_screen_greenbtn0
	ui->welcome_screen_greenbtn0 = lv_imgbtn_create(ui->welcome_screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for welcome_screen_greenbtn0
	static lv_style_t style_welcome_screen_greenbtn0_main;
	lv_style_init(&style_welcome_screen_greenbtn0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_greenbtn0_main
	lv_style_set_text_color(&style_welcome_screen_greenbtn0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_welcome_screen_greenbtn0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_greenbtn0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_greenbtn0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_greenbtn0, LV_IMGBTN_PART_MAIN, &style_welcome_screen_greenbtn0_main);
	lv_obj_set_pos(ui->welcome_screen_greenbtn0, 260, 1048);
	lv_obj_set_size(ui->welcome_screen_greenbtn0, 190, 190);
	lv_imgbtn_set_src(ui->welcome_screen_greenbtn0,LV_BTN_STATE_RELEASED,&_Button_Green_DARK_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_greenbtn0,LV_BTN_STATE_PRESSED,&_Button_Green_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_greenbtn0,LV_BTN_STATE_CHECKED_RELEASED,&_Button_Green_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_greenbtn0,LV_BTN_STATE_CHECKED_PRESSED,&_Button_Green_DARK_alpha_190x190);
	lv_imgbtn_set_checkable(ui->welcome_screen_greenbtn0, true);

	//Write codes welcome_screen_usrtglimg0
	ui->welcome_screen_usrtglimg0 = lv_img_create(ui->welcome_screen, NULL);

	//Write style LV_IMG_PART_MAIN for welcome_screen_usrtglimg0
	static lv_style_t style_welcome_screen_usrtglimg0_main;
	lv_style_init(&style_welcome_screen_usrtglimg0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_usrtglimg0_main
	lv_style_set_image_recolor(&style_welcome_screen_usrtglimg0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_usrtglimg0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_usrtglimg0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_usrtglimg0, LV_IMG_PART_MAIN, &style_welcome_screen_usrtglimg0_main);
	lv_obj_set_pos(ui->welcome_screen_usrtglimg0, 72, 871);
	lv_obj_set_size(ui->welcome_screen_usrtglimg0, 100, 100);
	lv_obj_set_click(ui->welcome_screen_usrtglimg0, true);
	lv_img_set_src(ui->welcome_screen_usrtglimg0,&_cyan_active_button_alpha_100x100);
	lv_img_set_pivot(ui->welcome_screen_usrtglimg0, 0,0);
	lv_img_set_angle(ui->welcome_screen_usrtglimg0, 0);

	//Write codes welcome_screen_usruntglimg0
	ui->welcome_screen_usruntglimg0 = lv_img_create(ui->welcome_screen, NULL);

	//Write style LV_IMG_PART_MAIN for welcome_screen_usruntglimg0
	static lv_style_t style_welcome_screen_usruntglimg0_main;
	lv_style_init(&style_welcome_screen_usruntglimg0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_usruntglimg0_main
	lv_style_set_image_recolor(&style_welcome_screen_usruntglimg0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_usruntglimg0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_usruntglimg0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_usruntglimg0, LV_IMG_PART_MAIN, &style_welcome_screen_usruntglimg0_main);
	lv_obj_set_pos(ui->welcome_screen_usruntglimg0, 72, 871);
	lv_obj_set_size(ui->welcome_screen_usruntglimg0, 100, 100);
	lv_obj_set_click(ui->welcome_screen_usruntglimg0, true);
	lv_img_set_src(ui->welcome_screen_usruntglimg0,&_cyan_inactive_button_alpha_100x100);
	lv_img_set_pivot(ui->welcome_screen_usruntglimg0, 0,0);
	lv_img_set_angle(ui->welcome_screen_usruntglimg0, 0);

	//Write codes welcome_screen_userlabel0
	ui->welcome_screen_userlabel0 = lv_label_create(ui->welcome_screen, NULL);
	lv_label_set_text(ui->welcome_screen_userlabel0, "User button latched OFF");
	lv_label_set_long_mode(ui->welcome_screen_userlabel0, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->welcome_screen_userlabel0, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for welcome_screen_userlabel0
	static lv_style_t style_welcome_screen_userlabel0_main;
	lv_style_init(&style_welcome_screen_userlabel0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_userlabel0_main
	lv_style_set_radius(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, &lv_font_simsun_28);
	lv_style_set_text_letter_space(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_welcome_screen_userlabel0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->welcome_screen_userlabel0, LV_LABEL_PART_MAIN, &style_welcome_screen_userlabel0_main);
	lv_obj_set_pos(ui->welcome_screen_userlabel0, 188, 893);
	lv_obj_set_size(ui->welcome_screen_userlabel0, 190, 0);

	//Write codes welcome_screen_helplabel0
	ui->welcome_screen_helplabel0 = lv_label_create(ui->welcome_screen, NULL);
	lv_label_set_text(ui->welcome_screen_helplabel0, "HELP");
	lv_label_set_long_mode(ui->welcome_screen_helplabel0, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->welcome_screen_helplabel0, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for welcome_screen_helplabel0
	static lv_style_t style_welcome_screen_helplabel0_main;
	lv_style_init(&style_welcome_screen_helplabel0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_helplabel0_main
	lv_style_set_radius(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, &lv_font_simsun_42);
	lv_style_set_text_letter_space(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_welcome_screen_helplabel0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->welcome_screen_helplabel0, LV_LABEL_PART_MAIN, &style_welcome_screen_helplabel0_main);
	lv_obj_set_pos(ui->welcome_screen_helplabel0, 4, 143);
	lv_obj_set_size(ui->welcome_screen_helplabel0, 130, 0);

	//Write codes welcome_screen_wifilabel0
	ui->welcome_screen_wifilabel0 = lv_label_create(ui->welcome_screen, NULL);
	lv_label_set_text(ui->welcome_screen_wifilabel0, "WIFI");
	lv_label_set_long_mode(ui->welcome_screen_wifilabel0, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->welcome_screen_wifilabel0, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for welcome_screen_wifilabel0
	static lv_style_t style_welcome_screen_wifilabel0_main;
	lv_style_init(&style_welcome_screen_wifilabel0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_wifilabel0_main
	lv_style_set_radius(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, &lv_font_simsun_42);
	lv_style_set_text_letter_space(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_welcome_screen_wifilabel0_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->welcome_screen_wifilabel0, LV_LABEL_PART_MAIN, &style_welcome_screen_wifilabel0_main);
	lv_obj_set_pos(ui->welcome_screen_wifilabel0, 584, 143);
	lv_obj_set_size(ui->welcome_screen_wifilabel0, 130, 0);

	//Write codes welcome_screen_img_5oodt29s
	ui->welcome_screen_img_5oodt29s = lv_img_create(ui->welcome_screen, NULL);

	//Write style LV_IMG_PART_MAIN for welcome_screen_img_5oodt29s
	static lv_style_t style_welcome_screen_img_5oodt29s_main;
	lv_style_init(&style_welcome_screen_img_5oodt29s_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_img_5oodt29s_main
	lv_style_set_image_recolor(&style_welcome_screen_img_5oodt29s_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_img_5oodt29s_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_img_5oodt29s_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_img_5oodt29s, LV_IMG_PART_MAIN, &style_welcome_screen_img_5oodt29s_main);
	lv_obj_set_pos(ui->welcome_screen_img_5oodt29s, 107, 353);
	lv_obj_set_size(ui->welcome_screen_img_5oodt29s, 500, 500);
	lv_obj_set_click(ui->welcome_screen_img_5oodt29s, true);
	lv_img_set_src(ui->welcome_screen_img_5oodt29s,&_IoT_Smart_Asset_Monitoring_G_600ppi_alpha_500x500);
	lv_img_set_pivot(ui->welcome_screen_img_5oodt29s, 0,0);
	lv_img_set_angle(ui->welcome_screen_img_5oodt29s, 0);

	//Write codes welcome_screen_bluebtn0
	ui->welcome_screen_bluebtn0 = lv_imgbtn_create(ui->welcome_screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for welcome_screen_bluebtn0
	static lv_style_t style_welcome_screen_bluebtn0_main;
	lv_style_init(&style_welcome_screen_bluebtn0_main);

	//Write style state: LV_STATE_DEFAULT for style_welcome_screen_bluebtn0_main
	lv_style_set_text_color(&style_welcome_screen_bluebtn0_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_welcome_screen_bluebtn0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_welcome_screen_bluebtn0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_welcome_screen_bluebtn0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->welcome_screen_bluebtn0, LV_IMGBTN_PART_MAIN, &style_welcome_screen_bluebtn0_main);
	lv_obj_set_pos(ui->welcome_screen_bluebtn0, 492, 1050);
	lv_obj_set_size(ui->welcome_screen_bluebtn0, 190, 190);
	lv_imgbtn_set_src(ui->welcome_screen_bluebtn0,LV_BTN_STATE_RELEASED,&_Button_Blue_DARK_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_bluebtn0,LV_BTN_STATE_PRESSED,&_Button_Blue_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_bluebtn0,LV_BTN_STATE_CHECKED_RELEASED,&_Button_Blue_alpha_190x190);
	lv_imgbtn_set_src(ui->welcome_screen_bluebtn0,LV_BTN_STATE_CHECKED_PRESSED,&_Button_Blue_DARK_alpha_190x190);
	lv_imgbtn_set_checkable(ui->welcome_screen_bluebtn0, true);

	//Init events for screen
	events_init_welcome_screen(ui);
}