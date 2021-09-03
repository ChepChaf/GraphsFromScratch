//
// Created by chep on 30/8/21.
//

#pragma once


#include "Color.h"

class Image
{
public:
    int width, height;
    int channels = 3;

    unsigned char *pixels;

    Image() = default;
    Image(int width, int height) : width(width), height(height)
    {
        pixels = new unsigned char[width * height * channels];

        Fill({255, 0, 0});
    }

    void Fill(Color color);
    void PutPixel(int x, int y, Color color);
};

