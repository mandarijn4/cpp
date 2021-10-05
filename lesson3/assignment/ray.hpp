#ifndef RAY_HPP
#define RAY_HPP
#include <iostream>
#include "vec3d.hpp"

class Ray{
    public:
        Vec3D direction;
        Vec3D support;
        Ray(float xSup, float ySup, float zSup, float xDir, float yDir, float zDir);
};

#endif