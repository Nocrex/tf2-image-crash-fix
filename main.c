#include <stdio.h>
#include "sdk/sdk.h"

/*
    Override the implementation of png_get_channels to return 0 channels on big images.

    Since the game calls this function to check if the png is supported by the engine BEFORE the problematic malloc happens, 
    the game just declares the png as corrupt and moves on.
*/
png_byte PNGAPI png_get_channels(png_const_structp png_ptr, png_const_infop info_ptr)
{
    if (png_ptr != NULL && info_ptr != NULL){
        if(info_ptr->height > 1024){
            fprintf(stderr, "Blocked image of size (%u, %u)\n", info_ptr->width, info_ptr->height);
            return (0);
        }

        return(info_ptr->channels);
    }

    return (0);
}
