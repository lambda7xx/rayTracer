//
// Created by lambda on 4/19/22.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream & out, color pixel_color) {
    //write the translated [0,255] value of each color component
    out<<static_cast<int>(255.999 * pixel_color.x()) << " "
        << static_cast<int>(255.999 * pixel_color.y()) <<" "
        << static_cast<int>(255.999 * pixel_color.z()) << "\n";
}

#endif //RAYTRACER_COLOR_H
