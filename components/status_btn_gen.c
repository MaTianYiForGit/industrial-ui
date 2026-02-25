/**
 * @file status_btn_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "status_btn_gen.h"
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

lv_obj_t * status_btn_create(lv_obj_t * parent, const char * text, lv_color_t bg_color)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_button_0 = lv_button_create(parent);
    lv_obj_set_name_static(lv_button_0, "status_btn_#");
    lv_obj_set_width(lv_button_0, 110);
    lv_obj_set_height(lv_button_0, 40);
    lv_obj_set_style_bg_color(lv_button_0, bg_color, 0);
    lv_obj_set_style_border_width(lv_button_0, 0, 0);
    lv_obj_set_style_radius(lv_button_0, 0, 0);
    lv_obj_set_style_shadow_width(lv_button_0, 0, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_0, text);
    lv_obj_set_style_text_color(lv_label_0, COLOR_WHITE, 0);
    lv_obj_set_align(lv_label_0, LV_ALIGN_CENTER);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

