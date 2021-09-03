//
// Created by chep on 30/8/21.
//

#include "Image.h"

void Image::PutPixel(int x, int y, Color color)
{
    auto sx = ((width / 2) + x) * channels;
    auto sy = (height / 2) - y;

    pixels[sx + ((width * channels) * sy)] = color.r;
    pixels[sx + ((width * channels) * sy) + 1] = color.g;
    pixels[sx + ((width * channels) * sy) + 2] = color.b;
}

void Image::Fill(Color color)
{
    for (int i = 0; i < width * height * channels; i += 3)
    {
        pixels[i] = color.r;
        pixels[i+1] = color.g;
        pixels[i+2] = color.b;
    }
}
