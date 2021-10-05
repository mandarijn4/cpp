#ifndef VEC3D_HPP
#define VEC3D_HPP
#include <iostream>
#include <cmath>

namespace st = std;

class Vec3D {
    public:
    float x,y,z;
    Vec3D(float x, float y, float z);
    void show();
    void show(st::string label);
    void show(st::string label, float scalar);
    Vec3D minus();
    Vec3D add(Vec3D const &other);
    Vec3D sub(Vec3D const &other);
    Vec3D mul(float scalar);
    Vec3D div(float scalar);
    float norm();
    Vec3D unit();
    float dot(Vec3D const &other);
    Vec3D cross(Vec3D const &other);
};

#endif