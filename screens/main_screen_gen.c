/**
 * @file main_screen_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "main_screen_gen.h"
#include "../industrial_control_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "main_screen_#");
    lv_obj_set_width(lv_obj_0, 800);
    lv_obj_set_height(lv_obj_0, 480);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_BG_MAIN, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_0, LV_FLEX_FLOW_COLUMN, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, 50);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_2, 330);
    lv_obj_set_height(lv_obj_2, 50);
    lv_obj_set_style_bg_opa(lv_obj_2, 0, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW, 0);
    lv_obj_t * status_btn_0 = status_btn_create(lv_obj_2, "联机", COLOR_STATUS_BLUE);
    
    lv_obj_t * status_btn_1 = status_btn_create(lv_obj_2, "运行", COLOR_STATUS_GREEN);
    
    lv_obj_t * status_btn_2 = status_btn_create(lv_obj_2, "本地", COLOR_STATUS_PINK);
    
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_3, 250);
    lv_obj_set_height(lv_obj_3, 50);
    lv_obj_set_style_bg_opa(lv_obj_3, 0, 0);
    lv_obj_set_style_border_width(lv_obj_3, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW, 0);
    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_3);
    lv_obj_set_width(lv_button_0, 125);
    lv_obj_set_height(lv_button_0, 40);
    lv_obj_set_style_bg_color(lv_button_0, COLOR_STATUS_ORANGE, 0);
    lv_obj_set_style_border_width(lv_button_0, 0, 0);
    lv_obj_set_style_radius(lv_button_0, 0, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, "故障代码");
    lv_obj_set_style_text_color(lv_label_0, COLOR_WHITE, 0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);
    
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_width(lv_obj_4, 125);
    lv_obj_set_height(lv_obj_4, 40);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_4, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_4, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_4, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_4);
    lv_label_set_text(lv_label_1, "-");
    lv_obj_set_style_text_color(lv_label_1, COLOR_BLACK, 0);
    
    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_1);
    lv_obj_set_width(lv_obj_5, 220);
    lv_obj_set_height(lv_obj_5, 50);
    lv_obj_set_style_bg_opa(lv_obj_5, 0, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_5, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
    lv_obj_set_width(lv_obj_6, lv_pct(100));
    lv_obj_set_height(lv_obj_6, 25);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_6, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_6, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_6, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_6, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_6, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_6, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_6);
    lv_label_set_text(lv_label_2, "2025 年 02 月 20 日 12:00");
    lv_obj_set_style_text_color(lv_label_2, COLOR_BLACK, 0);
    
    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_5);
    lv_obj_set_width(lv_button_1, lv_pct(100));
    lv_obj_set_height(lv_button_1, 25);
    lv_obj_set_style_bg_color(lv_button_1, COLOR_STATUS_YELLOW, 0);
    lv_obj_set_style_border_width(lv_button_1, 0, 0);
    lv_obj_set_style_radius(lv_button_1, 0, 0);
    lv_obj_t * lv_label_3 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_3, "厂家信息");
    lv_obj_set_style_text_color(lv_label_3, COLOR_BLACK, 0);
    lv_obj_set_align(lv_label_3, LV_ALIGN_CENTER);
    
    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_7, lv_pct(100));
    lv_obj_set_height(lv_obj_7, 350);
    lv_obj_set_style_bg_opa(lv_obj_7, 0, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_7, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_7, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_7, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_7, LV_FLEX_ALIGN_START, 0);
    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
    lv_obj_set_width(lv_obj_8, 280);
    lv_obj_set_height(lv_obj_8, lv_pct(100));
    lv_obj_set_style_bg_opa(lv_obj_8, 0, 0);
    lv_obj_set_style_border_width(lv_obj_8, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_8, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_t * param_item_0 = param_item_create(lv_obj_8, "输出能量值", "60.0", "kW");
    
    lv_obj_t * param_item_1 = param_item_create(lv_obj_8, "输入交流电压值", "380", "V");
    
    lv_obj_t * param_item_2 = param_item_create(lv_obj_8, "输入交流电流值", "120.5", "A");
    
    lv_obj_t * param_item_3 = param_item_create(lv_obj_8, "直流母线电压值", "540", "V");
    
    lv_obj_t * param_item_4 = param_item_create(lv_obj_8, "直流母线电流值", "90.0", "A");
    
    lv_obj_t * param_item_5 = param_item_create(lv_obj_8, "输出高频电压值", "2500", "V");
    
    lv_obj_t * param_item_6 = param_item_create(lv_obj_8, "输出高频电流值", "120.0", "A");
    
    lv_obj_t * param_item_7 = param_item_create(lv_obj_8, "输出频率值", "30.0", "kHz");
    
    lv_obj_t * param_item_8 = param_item_create(lv_obj_8, "能量使用率", "75.0", "%");
    
    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_7);
    lv_obj_set_width(lv_obj_9, 260);
    lv_obj_set_height(lv_obj_9, lv_pct(100));
    lv_obj_set_style_bg_opa(lv_obj_9, 0, 0);
    lv_obj_set_style_border_width(lv_obj_9, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_9, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_9, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_set_style_flex_main_place(lv_obj_9, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_9, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * monitor_card_0 = monitor_card_create(lv_obj_9, "参数号", "040", "", COLOR_MONITOR_GREEN_DARK, COLOR_MONITOR_GREEN_LIGHT);
    
    lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_9);
    lv_obj_set_width(lv_obj_10, lv_pct(100));
    lv_obj_set_height(lv_obj_10, 70);
    lv_obj_set_style_bg_opa(lv_obj_10, 0, 0);
    lv_obj_set_style_border_width(lv_obj_10, 0, 0);
    lv_obj_set_style_pad_top(lv_obj_10, 10, 0);
    lv_obj_set_style_flex_flow(lv_obj_10, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_t * lv_obj_11 = lv_obj_create(lv_obj_10);
    lv_obj_set_width(lv_obj_11, lv_pct(100));
    lv_obj_set_height(lv_obj_11, 30);
    lv_obj_set_style_bg_color(lv_obj_11, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_11, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_11, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_11, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_11, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_11, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_11, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_11);
    lv_label_set_text(lv_label_4, "数字输入端子状态值");
    lv_obj_set_style_text_color(lv_label_4, COLOR_GRAY_TEXT, 0);
    lv_obj_set_style_pad_left(lv_label_4, 8, 0);
    
    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_11);
    lv_label_set_text(lv_label_5, "'F0AC");
    lv_obj_set_style_text_color(lv_label_5, COLOR_BLACK, 0);
    lv_obj_set_style_pad_right(lv_label_5, 8, 0);
    
    lv_obj_t * lv_obj_12 = lv_obj_create(lv_obj_10);
    lv_obj_set_width(lv_obj_12, lv_pct(100));
    lv_obj_set_height(lv_obj_12, 30);
    lv_obj_set_style_bg_color(lv_obj_12, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_12, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_12, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_12, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_12, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_12, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_12, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_12);
    lv_label_set_text(lv_label_6, "数字输出端子状态值");
    lv_obj_set_style_text_color(lv_label_6, COLOR_GRAY_TEXT, 0);
    lv_obj_set_style_pad_left(lv_label_6, 8, 0);
    
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_12);
    lv_label_set_text(lv_label_7, "'F000");
    lv_obj_set_style_text_color(lv_label_7, COLOR_BLACK, 0);
    lv_obj_set_style_pad_right(lv_label_7, 8, 0);
    
    lv_obj_t * lv_obj_13 = lv_obj_create(lv_obj_7);
    lv_obj_set_width(lv_obj_13, 260);
    lv_obj_set_height(lv_obj_13, lv_pct(100));
    lv_obj_set_style_bg_opa(lv_obj_13, 0, 0);
    lv_obj_set_style_border_width(lv_obj_13, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_13, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_13, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_set_style_flex_main_place(lv_obj_13, LV_FLEX_ALIGN_START, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_13, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * monitor_card_1 = monitor_card_create(lv_obj_13, "参数值", "60.0", "kW", COLOR_MONITOR_BLUE_DARK, COLOR_MONITOR_BLUE_LIGHT);
    
    lv_obj_t * lv_obj_14 = lv_obj_create(lv_obj_13);
    lv_obj_set_width(lv_obj_14, lv_pct(100));
    lv_obj_set_height(lv_obj_14, 70);
    lv_obj_set_style_bg_opa(lv_obj_14, 0, 0);
    lv_obj_set_style_border_width(lv_obj_14, 0, 0);
    lv_obj_set_style_pad_top(lv_obj_14, 10, 0);
    lv_obj_set_style_flex_flow(lv_obj_14, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_t * lv_obj_15 = lv_obj_create(lv_obj_14);
    lv_obj_set_width(lv_obj_15, lv_pct(100));
    lv_obj_set_height(lv_obj_15, 30);
    lv_obj_set_style_bg_color(lv_obj_15, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_15, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_15, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_15, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_15, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_15, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_15, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_15);
    lv_label_set_text(lv_label_8, "模拟信号 1 转换值");
    lv_obj_set_style_text_color(lv_label_8, COLOR_GRAY_TEXT, 0);
    lv_obj_set_style_pad_left(lv_label_8, 8, 0);
    
    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_15);
    lv_label_set_text(lv_label_9, "'0250");
    lv_obj_set_style_text_color(lv_label_9, COLOR_BLACK, 0);
    lv_obj_set_style_pad_right(lv_label_9, 8, 0);
    
    lv_obj_t * lv_obj_16 = lv_obj_create(lv_obj_14);
    lv_obj_set_width(lv_obj_16, lv_pct(100));
    lv_obj_set_height(lv_obj_16, 30);
    lv_obj_set_style_bg_color(lv_obj_16, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_16, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_16, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_16, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_16, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_16, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_16, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_16);
    lv_label_set_text(lv_label_10, "模拟信号 2 转换值");
    lv_obj_set_style_text_color(lv_label_10, COLOR_GRAY_TEXT, 0);
    lv_obj_set_style_pad_left(lv_label_10, 8, 0);
    
    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_16);
    lv_label_set_text(lv_label_11, "'0000");
    lv_obj_set_style_text_color(lv_label_11, COLOR_BLACK, 0);
    lv_obj_set_style_pad_right(lv_label_11, 8, 0);
    
    lv_obj_t * lv_obj_17 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_17, lv_pct(100));
    lv_obj_set_height(lv_obj_17, 80);
    lv_obj_set_style_bg_opa(lv_obj_17, 0, 0);
    lv_obj_set_style_border_width(lv_obj_17, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_17, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_17, LV_FLEX_FLOW_ROW, 0);
    lv_obj_t * nav_tab_0 = nav_tab_create(lv_obj_17, "主控界面", COLOR_NAV_GRAY, false);
    
    lv_obj_t * nav_tab_1 = nav_tab_create(lv_obj_17, "数据监控", COLOR_NAV_BLUE, false);
    
    lv_obj_t * nav_tab_2 = nav_tab_create(lv_obj_17, "参数设定", COLOR_NAV_GREEN, false);
    
    lv_obj_t * nav_tab_3 = nav_tab_create(lv_obj_17, "分段设定", COLOR_NAV_GRAY, false);
    
    lv_obj_t * nav_tab_4 = nav_tab_create(lv_obj_17, "故障信息", COLOR_NAV_ORANGE, false);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

