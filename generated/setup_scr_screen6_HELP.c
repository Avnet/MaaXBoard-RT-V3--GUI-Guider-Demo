/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen6_HELP(lv_ui *ui){

	//Write codes screen6_HELP
	ui->screen6_HELP = lv_obj_create(NULL, NULL);

	//Write codes screen6_HELP_canvas_white
	ui->screen6_HELP_canvas_white = lv_canvas_create(ui->screen6_HELP, NULL);

	//Write style LV_CANVAS_PART_MAIN for screen6_HELP_canvas_white
	static lv_style_t style_screen6_HELP_canvas_white_main;
	lv_style_init(&style_screen6_HELP_canvas_white_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_canvas_white_main
	lv_style_set_image_recolor(&style_screen6_HELP_canvas_white_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen6_HELP_canvas_white_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen6_HELP_canvas_white, LV_CANVAS_PART_MAIN, &style_screen6_HELP_canvas_white_main);
	lv_obj_set_pos(ui->screen6_HELP_canvas_white, 0, 0);
	lv_obj_set_size(ui->screen6_HELP_canvas_white, 720, 1280);
	lv_color_t *buf_screen6_HELP_canvas_white = (lv_color_t*)lv_mem_alloc(720*1280*4);
	lv_canvas_set_buffer(ui->screen6_HELP_canvas_white, buf_screen6_HELP_canvas_white, 720, 1280, LV_IMG_CF_TRUE_COLOR);

	//Write codes screen6_HELP_left_btn
	ui->screen6_HELP_left_btn = lv_imgbtn_create(ui->screen6_HELP, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen6_HELP_left_btn
	static lv_style_t style_screen6_HELP_left_btn_main;
	lv_style_init(&style_screen6_HELP_left_btn_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_left_btn_main
	lv_style_set_text_color(&style_screen6_HELP_left_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen6_HELP_left_btn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen6_HELP_left_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen6_HELP_left_btn_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen6_HELP_left_btn, LV_IMGBTN_PART_MAIN, &style_screen6_HELP_left_btn_main);
	lv_obj_set_pos(ui->screen6_HELP_left_btn, 44, 1100);
	lv_obj_set_size(ui->screen6_HELP_left_btn, 132, 132);
	lv_imgbtn_set_src(ui->screen6_HELP_left_btn,LV_BTN_STATE_RELEASED,&_left_icon_alpha_132x132);
	lv_imgbtn_set_src(ui->screen6_HELP_left_btn,LV_BTN_STATE_PRESSED,&_left_icon_alpha_132x132);

	//Write codes screen6_HELP_left_label
	ui->screen6_HELP_left_label = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_left_label, "SYSTEM");
	lv_label_set_long_mode(ui->screen6_HELP_left_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_left_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_left_label
	static lv_style_t style_screen6_HELP_left_label_main;
	lv_style_init(&style_screen6_HELP_left_label_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_left_label_main
	lv_style_set_radius(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, lv_color_make(0x13, 0x80, 0x36));
	lv_style_set_text_font(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_40);
	lv_style_set_text_letter_space(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_left_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_left_label, LV_LABEL_PART_MAIN, &style_screen6_HELP_left_label_main);
	lv_obj_set_pos(ui->screen6_HELP_left_label, 20, 1200);
	lv_obj_set_size(ui->screen6_HELP_left_label, 180, 0);

	//Write codes screen6_HELP_avlogoimg0
	ui->screen6_HELP_avlogoimg0 = lv_img_create(ui->screen6_HELP, NULL);

	//Write style LV_IMG_PART_MAIN for screen6_HELP_avlogoimg0
	static lv_style_t style_screen6_HELP_avlogoimg0_main;
	lv_style_init(&style_screen6_HELP_avlogoimg0_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_avlogoimg0_main
	lv_style_set_image_recolor(&style_screen6_HELP_avlogoimg0_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen6_HELP_avlogoimg0_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen6_HELP_avlogoimg0_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen6_HELP_avlogoimg0, LV_IMG_PART_MAIN, &style_screen6_HELP_avlogoimg0_main);
	lv_obj_set_pos(ui->screen6_HELP_avlogoimg0, 0, 0);
	lv_obj_set_size(ui->screen6_HELP_avlogoimg0, 130, 130);
	lv_obj_set_click(ui->screen6_HELP_avlogoimg0, true);
	lv_img_set_src(ui->screen6_HELP_avlogoimg0,&_avnet_logo2_alpha_130x130);
	lv_img_set_pivot(ui->screen6_HELP_avlogoimg0, 0,0);
	lv_img_set_angle(ui->screen6_HELP_avlogoimg0, 0);

	//Write codes screen6_HELP_right_btn
	ui->screen6_HELP_right_btn = lv_imgbtn_create(ui->screen6_HELP, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen6_HELP_right_btn
	static lv_style_t style_screen6_HELP_right_btn_main;
	lv_style_init(&style_screen6_HELP_right_btn_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_right_btn_main
	lv_style_set_text_color(&style_screen6_HELP_right_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen6_HELP_right_btn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen6_HELP_right_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen6_HELP_right_btn_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen6_HELP_right_btn, LV_IMGBTN_PART_MAIN, &style_screen6_HELP_right_btn_main);
	lv_obj_set_pos(ui->screen6_HELP_right_btn, 544, 1100);
	lv_obj_set_size(ui->screen6_HELP_right_btn, 132, 132);
	lv_imgbtn_set_src(ui->screen6_HELP_right_btn,LV_BTN_STATE_RELEASED,&_right_icon_alpha_132x132);
	lv_imgbtn_set_src(ui->screen6_HELP_right_btn,LV_BTN_STATE_PRESSED,&_right_icon_alpha_132x132);

	//Write codes screen6_HELP_right_label
	ui->screen6_HELP_right_label = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_right_label, "MENU");
	lv_label_set_long_mode(ui->screen6_HELP_right_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_right_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_right_label
	static lv_style_t style_screen6_HELP_right_label_main;
	lv_style_init(&style_screen6_HELP_right_label_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_right_label_main
	lv_style_set_radius(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, lv_color_make(0x13, 0x80, 0x36));
	lv_style_set_text_font(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_40);
	lv_style_set_text_letter_space(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_right_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_right_label, LV_LABEL_PART_MAIN, &style_screen6_HELP_right_label_main);
	lv_obj_set_pos(ui->screen6_HELP_right_label, 520, 1200);
	lv_obj_set_size(ui->screen6_HELP_right_label, 180, 0);

	//Write codes screen6_HELP_home_btn
	ui->screen6_HELP_home_btn = lv_imgbtn_create(ui->screen6_HELP, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen6_HELP_home_btn
	static lv_style_t style_screen6_HELP_home_btn_main;
	lv_style_init(&style_screen6_HELP_home_btn_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_home_btn_main
	lv_style_set_text_color(&style_screen6_HELP_home_btn_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen6_HELP_home_btn_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen6_HELP_home_btn_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen6_HELP_home_btn_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen6_HELP_home_btn, LV_IMGBTN_PART_MAIN, &style_screen6_HELP_home_btn_main);
	lv_obj_set_pos(ui->screen6_HELP_home_btn, 294, 1100);
	lv_obj_set_size(ui->screen6_HELP_home_btn, 132, 132);
	lv_imgbtn_set_src(ui->screen6_HELP_home_btn,LV_BTN_STATE_RELEASED,&_home_icon_alpha_132x132);
	lv_imgbtn_set_src(ui->screen6_HELP_home_btn,LV_BTN_STATE_PRESSED,&_home_icon_alpha_132x132);

	//Write codes screen6_HELP_page_label
	ui->screen6_HELP_page_label = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_page_label, "Help");
	lv_label_set_long_mode(ui->screen6_HELP_page_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_page_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_page_label
	static lv_style_t style_screen6_HELP_page_label_main;
	lv_style_init(&style_screen6_HELP_page_label_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_page_label_main
	lv_style_set_radius(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, lv_color_make(0x13, 0x80, 0x36));
	lv_style_set_text_font(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_48);
	lv_style_set_text_letter_space(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_page_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_page_label, LV_LABEL_PART_MAIN, &style_screen6_HELP_page_label_main);
	lv_obj_set_pos(ui->screen6_HELP_page_label, 180, 45);
	lv_obj_set_size(ui->screen6_HELP_page_label, 500, 0);

	//Write codes screen6_HELP_demo_label
	ui->screen6_HELP_demo_label = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_demo_label, "MaaxBoard RT: LVGL based demo");
	lv_label_set_long_mode(ui->screen6_HELP_demo_label, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_demo_label, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_demo_label
	static lv_style_t style_screen6_HELP_demo_label_main;
	lv_style_init(&style_screen6_HELP_demo_label_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_demo_label_main
	lv_style_set_radius(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, lv_color_make(0x13, 0x80, 0x36));
	lv_style_set_text_font(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_36);
	lv_style_set_text_letter_space(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_demo_label_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_demo_label, LV_LABEL_PART_MAIN, &style_screen6_HELP_demo_label_main);
	lv_obj_set_pos(ui->screen6_HELP_demo_label, 20, 170);
	lv_obj_set_size(ui->screen6_HELP_demo_label, 680, 0);

	//Write codes screen6_HELP_label_1
	ui->screen6_HELP_label_1 = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_label_1, "This application provides a subset of board tests that can be excersized:");
	lv_label_set_long_mode(ui->screen6_HELP_label_1, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_label_1, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_label_1
	static lv_style_t style_screen6_HELP_label_1_main;
	lv_style_init(&style_screen6_HELP_label_1_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_label_1_main
	lv_style_set_radius(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_24);
	lv_style_set_text_letter_space(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_label_1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_label_1, LV_LABEL_PART_MAIN, &style_screen6_HELP_label_1_main);
	lv_obj_set_pos(ui->screen6_HELP_label_1, 60, 230);
	lv_obj_set_size(ui->screen6_HELP_label_1, 600, 0);

	//Write codes screen6_HELP_label_2
	ui->screen6_HELP_label_2 = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_label_2, "    -  From touch panel setting ");
	lv_label_set_long_mode(ui->screen6_HELP_label_2, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_label_2, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_label_2
	static lv_style_t style_screen6_HELP_label_2_main;
	lv_style_init(&style_screen6_HELP_label_2_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_label_2_main
	lv_style_set_radius(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_24);
	lv_style_set_text_letter_space(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_label_2_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_label_2, LV_LABEL_PART_MAIN, &style_screen6_HELP_label_2_main);
	lv_obj_set_pos(ui->screen6_HELP_label_2, 60, 285);
	lv_obj_set_size(ui->screen6_HELP_label_2, 600, 0);

	//Write codes screen6_HELP_label_3
	ui->screen6_HELP_label_3 = lv_label_create(ui->screen6_HELP, NULL);
	lv_label_set_text(ui->screen6_HELP_label_3, "    -  Serial console and keyboard");
	lv_label_set_long_mode(ui->screen6_HELP_label_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen6_HELP_label_3, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for screen6_HELP_label_3
	static lv_style_t style_screen6_HELP_label_3_main;
	lv_style_init(&style_screen6_HELP_label_3_main);

	//Write style state: LV_STATE_DEFAULT for style_screen6_HELP_label_3_main
	lv_style_set_radius(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_font(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, &lv_font_OpenSans_Regular_24);
	lv_style_set_text_letter_space(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen6_HELP_label_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen6_HELP_label_3, LV_LABEL_PART_MAIN, &style_screen6_HELP_label_3_main);
	lv_obj_set_pos(ui->screen6_HELP_label_3, 60, 315);
	lv_obj_set_size(ui->screen6_HELP_label_3, 600, 0);

	//Init events for screen
	events_init_screen6_HELP(ui);
}