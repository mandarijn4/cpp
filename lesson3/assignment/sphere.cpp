#include <iostream>
#include <cmath>

#include "vec3d.hpp"
#include "ray.hpp"
#include "sphere.hpp"

Sphere::Sphere(float x, float y, float z, float radius) : center(x,y,z), radius(radius){};

float Sphere::distFromRay(Ray const &ray) const{
    auto support = ray.support;
    auto direction = ray.direction;
    auto centerVec = center;

    auto minResult = centerVec.sub(support);
    auto dotResult = minResult.dot(direction);
    auto addResult = support.add(direction.mul(dotResult));
    return centerVec.sub(addResult).norm();
}

bool Sphere::hit(Ray const &ray) const{
    return distFromRay(ray) <= radius;
}

Vec3D Sphere::hitPoint(Ray const &ray) const{
    auto support = ray.support;
    auto direction = ray.direction;
    auto centerVec = center;

    //calculate the hitpoint 
    auto cenMinSub = centerVec.sub(support);
    auto distance = distFromRay(ray);
    auto cenMinSubDotDir = cenMinSub.dot(direction);
    auto root = sqrt(pow(radius, 2) - pow(distance, 2));

    auto cenMinRoot = cenMinSubDotDir - root;
    return support.add(direction.mul(cenMinRoot));
}