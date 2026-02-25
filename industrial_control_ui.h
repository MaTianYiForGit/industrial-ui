/**
 * @file industrial_control_ui.h
 */

#ifndef INDUSTRIAL_CONTROL_UI_H
#define INDUSTRIAL_CONTROL_UI_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "industrial_control_ui_gen.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */
void industrial_control_ui_init(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*INDUSTRIAL_CONTROL_UI_H*/