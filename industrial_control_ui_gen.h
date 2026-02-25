/**
 * @file industrial_control_ui_gen.h
 */

#ifndef INDUSTRIAL_CONTROL_UI_GEN_H
#define INDUSTRIAL_CONTROL_UI_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif



/*********************
 *      DEFINES
 *********************/

/**
 * 主背景色
 */
#define COLOR_BG_MAIN lv_color_hex(0xF0F0F0)

/**
 * 白色
 */
#define COLOR_WHITE lv_color_hex(0xFFFFFF)

/**
 * 黑色
 */
#define COLOR_BLACK lv_color_hex(0x000000)

/**
 * 浅灰
 */
#define COLOR_GRAY_LIGHT lv_color_hex(0xE0E0E0)

/**
 * 文字灰
 */
#define COLOR_GRAY_TEXT lv_color_hex(0x404040)

/**
 * 联机蓝
 */
#define COLOR_STATUS_BLUE lv_color_hex(0x0099CC)

/**
 * 运行绿
 */
#define COLOR_STATUS_GREEN lv_color_hex(0x00CC66)

/**
 * 本地粉
 */
#define COLOR_STATUS_PINK lv_color_hex(0xFF99CC)

/**
 * 故障橙
 */
#define COLOR_STATUS_ORANGE lv_color_hex(0xCC6633)

/**
 * 厂家信息黄
 */
#define COLOR_STATUS_YELLOW lv_color_hex(0xFFCC00)

/**
 * 监控绿深
 */
#define COLOR_MONITOR_GREEN_DARK lv_color_hex(0x009966)

/**
 * 监控绿浅
 */
#define COLOR_MONITOR_GREEN_LIGHT lv_color_hex(0x99CC66)

/**
 * 监控蓝深
 */
#define COLOR_MONITOR_BLUE_DARK lv_color_hex(0x0099CC)

/**
 * 监控蓝中
 */
#define COLOR_MONITOR_BLUE_MID lv_color_hex(0x66CCFF)

/**
 * 监控蓝浅
 */
#define COLOR_MONITOR_BLUE_LIGHT lv_color_hex(0xCCEEFF)

/**
 * 导航灰
 */
#define COLOR_NAV_GRAY lv_color_hex(0xCCCCCC)

/**
 * 导航蓝
 */
#define COLOR_NAV_BLUE lv_color_hex(0x0099CC)

/**
 * 导航绿
 */
#define COLOR_NAV_GREEN lv_color_hex(0x00CC66)

/**
 * 导航橙
 */
#define COLOR_NAV_ORANGE lv_color_hex(0xFF6600)

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/*-------------------
 * Permanent screens
 *------------------*/

/*----------------
 * Global styles
 *----------------*/

/*----------------
 * Fonts
 *----------------*/

/*----------------
 * Images
 *----------------*/

/*----------------
 * Subjects
 *----------------*/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/*----------------
 * Event Callbacks
 *----------------*/

/**
 * Initialize the component library
 */

void industrial_control_ui_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

/**********************
 *   POST INCLUDES
 **********************/

/*Include all the widgets, components and screens of this library*/
#include "components/monitor_card_gen.h"
#include "components/nav_tab_gen.h"
#include "components/param_item_gen.h"
#include "components/status_btn_gen.h"
#include "screens/main_screen_gen.h"

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*INDUSTRIAL_CONTROL_UI_GEN_H*/