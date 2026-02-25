/**
 * @file monitor_card_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "monitor_card_gen.h"
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

lv_obj_t * monitor_card_create(lv_obj_t * parent, const char * title, const char * value, const char * unit, lv_color_t color_dark, lv_color_t color_light)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "monitor_card_#");
    lv_obj_set_width(lv_obj_0, 250);
    lv_obj_set_height(lv_obj_0, 280);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, lv_pct(50));
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_1, color_dark, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_0, "监控");
    lv_obj_set_width(lv_label_0, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color(lv_label_0, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(lv_label_0, 0, 0);
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_1, title);
    lv_obj_set_width(lv_label_1, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color(lv_label_1, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(lv_label_1, 0, 0);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_2, lv_pct(50));
    lv_obj_set_height(lv_obj_2, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_2, color_light, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_2, LV_FLEX_FLOW_COLUMN, 0);
    lv_obj_set_style_flex_main_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_2);
    lv_label_set_text(lv_label_2, value);
    lv_obj_set_width(lv_label_2, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color(lv_label_2, COLOR_BLACK, 0);
    lv_obj_set_style_bg_opa(lv_label_2, 0, 0);
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, 0);
    
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_2);
    lv_label_set_text(lv_label_3, unit);
    lv_obj_set_width(lv_label_3, LV_SIZE_CONTENT);
    lv_obj_set_style_text_color(lv_label_3, COLOR_BLACK, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

