/**
 * @file param_item_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "param_item_gen.h"
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

lv_obj_t * param_item_create(lv_obj_t * parent, const char * label, const char * value, const char * unit)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "param_item_#");
    lv_obj_set_width(lv_obj_0, 280);
    lv_obj_set_height(lv_obj_0, 48);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_WHITE, 0);
    lv_obj_set_style_border_color(lv_obj_0, COLOR_GRAY_LIGHT, 0);
    lv_obj_set_style_border_width(lv_obj_0, 1, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_0, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_0, LV_FLEX_ALIGN_SPACE_BETWEEN, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_0, LV_FLEX_ALIGN_CENTER, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, label);
    lv_obj_set_width(lv_label_0, 120);
    lv_obj_set_style_pad_left(lv_label_0, 8, 0);
    lv_obj_set_style_text_color(lv_label_0, COLOR_GRAY_TEXT, 0);
    lv_obj_set_style_bg_opa(lv_label_0, 0, 0);
    lv_obj_set_style_border_width(lv_label_0, 0, 0);
    lv_obj_set_style_pad_all(lv_label_0, 4, 0);
    
    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_width(lv_obj_1, 150);
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW, 0);
    lv_obj_set_style_flex_main_place(lv_obj_1, LV_FLEX_ALIGN_END, 0);
    lv_obj_set_style_flex_cross_place(lv_obj_1, LV_FLEX_ALIGN_CENTER, 0);
    lv_obj_set_style_pad_right(lv_obj_1, 8, 0);
    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_1, value);
    lv_obj_set_width(lv_label_1, 100);
    lv_obj_set_style_text_color(lv_label_1, COLOR_BLACK, 0);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_bg_opa(lv_label_1, 0, 0);
    lv_obj_set_style_border_width(lv_label_1, 0, 0);
    lv_obj_set_style_pad_all(lv_label_1, 4, 0);
    
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_2, unit);
    lv_obj_set_width(lv_label_2, 40);
    lv_obj_set_style_text_color(lv_label_2, COLOR_GRAY_TEXT, 0);
    lv_obj_set_style_bg_opa(lv_label_2, 0, 0);
    lv_obj_set_style_border_width(lv_label_2, 0, 0);
    lv_obj_set_style_pad_all(lv_label_2, 4, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

