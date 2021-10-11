#ifndef SPHERE_HPP
#define SPHERE_HPP
#include <iostream>
#include <cmath>

#include "vec3d.hpp"
#include "ray.hpp"

class Sphere{
    public:
        Vec3D center;
        float radius;
        Sphere(float x, float y, float z, float radius);
        float distFromRay(Ray const &ray) const;
        bool hit(Ray const &ray) const;
        Vec3D hitPoint(Ray const &ray) const;
};  

#endif