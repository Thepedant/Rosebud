#ifndef ROSE_CONFIG_H
#define ROSE_CONFIG_H
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <cassert>
#include "types.h"

#define ROSE_APP_NAME ("Rosebud")
#define ROSE_DATA_FILE_NAME ("CART_DATA")
#define ROSE_MAIN_CODE_FILE_NAME ("main.js")
#define ROSE_CODE_FILE_SUFFIX (".js")

#define ROSE_MIN_INT16 (-32767)
#define ROSE_MAX_INT16 (32767)


#define ROSE_SCREEN_WIDTH 320
#define ROSE_SCREEN_HEIGHT 180
#define ROSE_SCREEN_SIZE (ROSE_SCREEN_WIDTH * ROSE_SCREEN_HEIGHT)
#define ROSE_INITIAL_WINDOW_WIDTH (ROSE_SCREEN_WIDTH * 2)
#define ROSE_INITIAL_WINDOW_HEIGHT (ROSE_SCREEN_HEIGHT * 2)
#define ROSE_PALETTE_INDEX_NUM (256)
#define ROSE_PALETTE_SIZE (ROSE_PALETTE_INDEX_NUM * 3)
#define ROSE_MEMORY_SIZE (1024 * 1024)
#define ROSE_RUNTIME_RESERVED_MEMORY_SIZE ((1024 * 64) - ROSE_PALETTE_SIZE)

#define ROSE_MAX_TOUCH (10)
#define ROSE_LEFT_MOUSE_IDX (10) 
#define ROSE_RIGHT_MOUSE_IDX (11)
#define ROSE_MIDDLE_MOUSE_IDX (12)
#define ROSE_X1_MOUSE_IDX (13)
#define ROSE_X2_MOUSE_IDX (14)

#define ROSE_MOUSE_POS_IDX (10) // for the pointer position struct


#endif
