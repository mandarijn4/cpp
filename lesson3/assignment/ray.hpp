#ifndef RAY_HPP
#define RAY_HPP
#include <iostream>
#include <vector>
#include "vec3d.hpp"
#include "object.hpp"

namespace st = std;

typedef st::vector<Object*> VPO;

class Ray{
    public:
        Vec3D direction;
        Vec3D support;
        VPO &objects;
        Ray::Ray(float xStart, float yStart, VPO &objects);
        bool scan();
};

#endif