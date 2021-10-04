/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_help_screen(lv_ui *ui){

	//Write codes help_screen
	ui->help_screen = lv_obj_create(NULL, NULL);

	//Write codes help_screen_canvas_black
	ui->help_screen_canvas_black = lv_canvas_create(ui->help_screen, NULL);

	//Write style LV_CANVAS_PART_MAIN for help_screen_canvas_black
	static lv_style_t style_help_screen_canvas_black_main;
	lv_style_init(&style_help_screen_canvas_black_main);

	//Write style state: LV_STATE_DEFAULT for style_help_screen_canvas_black_main
	lv_style_set_image_recolor(&style_help_screen_canvas_black_main, LV_STATE_DEFAULT, lv_color_make(0x05, 0x05, 0x05));
	lv_style_set_image_recolor_opa(&style_help_screen_canvas_black_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->help_screen_canvas_black, LV_CANVAS_PART_MAIN, &style_help_screen_canvas_black_main);
	lv_obj_set_pos(ui->help_screen_canvas_black, 0, 0);
	lv_obj_set_size(ui->help_screen_canvas_black, 720, 1280);
	lv_color_t *buf_help_screen_canvas_black = (lv_color_t*)lv_mem_alloc(720*1280*4);
	lv_canvas_set_buffer(ui->help_screen_canvas_black, buf_help_screen_canvas_black, 720, 1280, LV_IMG_CF_TRUE_COLOR);

	//Write codes help_screen_img1
	ui->help_screen_img1 = lv_img_create(ui->help_screen, NULL);

	//Write style LV_IMG_PART_MAIN for help_screen_img1
	static lv_style_t style_help_screen_img1_main;
	lv_style_init(&style_help_screen_img1_main);

	//Write style state: LV_STATE_DEFAULT for style_help_screen_img1_main
	lv_style_set_image_recolor(&style_help_screen_img1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_help_screen_img1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_help_screen_img1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->help_screen_img1, LV_IMG_PART_MAIN, &style_help_screen_img1_main);
	lv_obj_set_pos(ui->help_screen_img1, 97, 172);
	lv_obj_set_size(ui->help_screen_img1, 499, 772);
	lv_obj_set_click(ui->help_screen_img1, true);
	lv_img_set_src(ui->help_screen_img1,&_maaxBoard01_alpha_499x772);
	lv_img_set_pivot(ui->help_screen_img1, 0,0);
	lv_img_set_angle(ui->help_screen_img1, 0);

	//Write codes help_screen_imgbtn1
	ui->help_screen_imgbtn1 = lv_imgbtn_create(ui->help_screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for help_screen_imgbtn1
	static lv_style_t style_help_screen_imgbtn1_main;
	lv_style_init(&style_help_screen_imgbtn1_main);

	//Write style state: LV_STATE_DEFAULT for style_help_screen_imgbtn1_main
	lv_style_set_text_color(&style_help_screen_imgbtn1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_help_screen_imgbtn1_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_help_screen_imgbtn1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_help_screen_imgbtn1_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->help_screen_imgbtn1, LV_IMGBTN_PART_MAIN, &style_help_screen_imgbtn1_main);
	lv_obj_set_pos(ui->help_screen_imgbtn1, 566, 19);
	lv_obj_set_size(ui->help_screen_imgbtn1, 130, 130);
	lv_imgbtn_set_src(ui->help_screen_imgbtn1,LV_BTN_STATE_RELEASED,&_image008_alpha_130x130);
	lv_imgbtn_set_src(ui->help_screen_imgbtn1,LV_BTN_STATE_PRESSED,&_image008_dark_alpha_130x130);

	//Write codes help_screen_table_functions
	ui->help_screen_table_functions = lv_table_create(ui->help_screen, NULL);

	//Write style LV_TABLE_PART_BG for help_screen_table_functions
	static lv_style_t style_help_screen_table_functions_bg;
	lv_style_init(&style_help_screen_table_functions_bg);

	//Write style state: LV_STATE_DEFAULT for style_help_screen_table_functions_bg
	lv_style_set_bg_color(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_border_width(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_text_color(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_text_decor(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, LV_TEXT_DECOR_NONE);
	lv_style_set_pad_left(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, 3);
	lv_style_set_pad_right(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, 3);
	lv_style_set_pad_top(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, 3);
	lv_style_set_pad_bottom(&style_help_screen_table_functions_bg, LV_STATE_DEFAULT, 3);
	lv_obj_add_style(ui->help_screen_table_functions, LV_TABLE_PART_BG, &style_help_screen_table_functions_bg);

	//Write style LV_TABLE_PART_CELL1 for help_screen_table_functions
	static lv_style_t style_help_screen_table_functions_cell1;
	lv_style_init(&style_help_screen_table_functions_cell1);

	//Write style state: LV_STATE_DEFAULT for style_help_screen_table_functions_cell1
	lv_style_set_border_color(&style_help_screen_table_functions_cell1, LV_STATE_DEFAULT, lv_color_make(0xff, 0x00, 0x00));
	lv_style_set_border_width(&style_help_screen_table_functions_cell1, LV_STATE_DEFAULT, 1);
	lv_obj_add_style(ui->help_screen_table_functions, LV_TABLE_PART_CELL1, &style_help_screen_table_functions_cell1);
	lv_obj_set_pos(ui->help_screen_table_functions, 210, 989);
	lv_table_set_col_cnt(ui->help_screen_table_functions,2);
	lv_table_set_row_cnt(ui->help_screen_table_functions,7);
	lv_table_set_cell_value(ui->help_screen_table_functions,0,0,"Screen #");
	lv_table_set_cell_value(ui->help_screen_table_functions,1,0,"1");
	lv_table_set_cell_value(ui->help_screen_table_functions,2,0,"2");
	lv_table_set_cell_value(ui->help_screen_table_functions,3,0,"3");
	lv_table_set_cell_value(ui->help_screen_table_functions,4,0,"4");
	lv_table_set_cell_value(ui->help_screen_table_functions,5,0,"5");
	lv_table_set_cell_value(ui->help_screen_table_functions,6,0,"6");
	lv_table_set_cell_value(ui->help_screen_table_functions,0,1,"Function Group");
	lv_table_set_cell_value(ui->help_screen_table_functions,1,1," LEDs & Switches");
	lv_table_set_cell_value(ui->help_screen_table_functions,2,1,"Wi-Fi & Network");
	lv_table_set_cell_value(ui->help_screen_table_functions,3,1,"USB & Expansion");
	lv_table_set_cell_value(ui->help_screen_table_functions,4,1,"Audio & Video");
	lv_table_set_cell_value(ui->help_screen_table_functions,5,1,"System & Security");
	lv_table_set_cell_value(ui->help_screen_table_functions,6,1,"Info & Help");
	lv_obj_set_style_local_pad_left(ui->help_screen_table_functions, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 5);
	lv_obj_set_style_local_pad_right(ui->help_screen_table_functions, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 5);
	lv_obj_set_style_local_pad_top(ui->help_screen_table_functions, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 5);
	lv_obj_set_style_local_pad_bottom(ui->help_screen_table_functions, LV_TABLE_PART_CELL1, LV_STATE_DEFAULT, 5);

	//Write codes help_screen_helplabel0_3
	ui->help_screen_helplabel0_3 = lv_label_create(ui->help_screen, NULL);
	lv_label_set_text(ui->help_screen_helplabel0_3, "Home>>");
	lv_label_set_long_mode(ui->help_screen_helplabel0_3, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->help_screen_helplabel0_3, LV_LABEL_ALIGN_LEFT);

	//Write style LV_LABEL_PART_MAIN for help_screen_helplabel0_3
	static lv_style_t style_help_screen_helplabel0_3_main;
	lv_style_init(&style_help_screen_helplabel0_3_main);

	//Write style state: LV_STATE_DEFAULT for style_help_screen_helplabel0_3_main
	lv_style_set_radius(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 255);
	lv_style_set_text_color(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, lv_color_make(0xf5, 0x00, 0x00));
	lv_style_set_text_font(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, &lv_font_simsun_42);
	lv_style_set_text_letter_space(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 2);
	lv_style_set_pad_left(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_help_screen_helplabel0_3_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->help_screen_helplabel0_3, LV_LABEL_PART_MAIN, &style_help_screen_helplabel0_3_main);
	lv_obj_set_pos(ui->help_screen_helplabel0_3, 421, 20);
	lv_obj_set_size(ui->help_screen_helplabel0_3, 139, 0);

	//Init events for screen
	events_init_help_screen(ui);
}