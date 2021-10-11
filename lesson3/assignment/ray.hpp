#ifndef RAY_HPP
#define RAY_HPP
#include <iostream>
#include <vector>
#include "vec3d.hpp"

namespace st = std;

class Ray{
    public:
        Vec3D direction;
        Vec3D support;
        Ray(float xSup, float ySup, float zSup, float xDir, float yDir, float zDir);
};

#endif