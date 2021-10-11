#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "vec3d.hpp"
#include "ray.hpp"

class Object{
    public:
        Vec3D center;
        Object(float x, float y, float z);
        virtual bool hit(Ray &ray);
};

#endif;