#include <iostream>
#include <cmath>
#include "vec3d.hpp"

namespace st = std;

float x,y,z;
Vec3D::Vec3D(float x, float y, float z){
    this->x = x;
    this->y = y;
    this->z = z;
};
void Vec3D::show(){
    st::cout << "The co-ordinates are: x=" << this->x << ", y=" << this->y << ", z=" << this->z << '\n';
    st::cout << '\n';
};
void Vec3D::show(st::string label, float scalar){
    st::cout << "De scalar van het label " << label << " is " << scalar << '\n';
    st::cout << '\n';
};
Vec3D Vec3D::minus(){
    return Vec3D(-this->x, -this->y, -this->z);
};
Vec3D Vec3D::add(Vec3D const &other){
    return Vec3D(this->x + other.x, this->y + other.y, this->z + other.z);
};
Vec3D Vec3D::sub(Vec3D const &other){
    return Vec3D(this->x - other.x, this->y - other.y, this->z - other.z);
};
Vec3D Vec3D::mul(float scalar){
    return Vec3D(this->x * scalar, this->y * scalar, this->z * scalar);
};
Vec3D Vec3D::div(float scalar){
    return Vec3D(this->x / scalar, this->y / scalar, this->z / scalar);
};
float Vec3D::norm(){
    return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2));
};
Vec3D Vec3D::unit(){
    auto currentNorm = norm();
    return Vec3D((this->x * 1/currentNorm), (this->y * 1/currentNorm), (this->z * 1/currentNorm));
};
float Vec3D::dot(Vec3D const &other){
    return (this->x * other.x + (this->y * other.y) + (this->z * other.z));
};
Vec3D Vec3D::cross(Vec3D const &other){
    return Vec3D(((this->y * other.z) - (this->z * other.y)), ((this->z * other.x) - (this->x * other.z)), ((this->x * other.y) - (this->y * other.x)));
};