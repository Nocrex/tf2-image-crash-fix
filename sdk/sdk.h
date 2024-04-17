#pragma once
// Only necessary headers taken straight from libpng 1.5.30
#include "pngconf.h"

typedef struct png_color_struct
{
   png_byte red;
   png_byte green;
   png_byte blue;
} png_color;
typedef png_color FAR * png_colorp;

#include "pnginfo.h"

typedef struct png_struct_def png_struct;
typedef PNG_CONST png_struct FAR * png_const_structp;

typedef struct png_info_def png_info;
typedef png_info FAR * png_infop;
typedef PNG_CONST png_info FAR * png_const_infop;