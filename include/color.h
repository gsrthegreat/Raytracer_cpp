#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {
    auto r = int(255.99 * pixel_color.x());
    auto g = int(255.99 * pixel_color.y());
    auto b = int(255.99 * pixel_color.z());

    out << r << " " << g << " " << b << "\n"; 
}

#endif
