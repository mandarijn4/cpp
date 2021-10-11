#include <iostream>
#include <cmath>
#include "ray.hpp"
#include "vec3d.hpp"

namespace st = std;

Ray::Ray(float xSup, float ySup, float zSup, float xDir, float yDir, float zDir) : direction(Vec3D(xDir, yDir, zDir).unit()), support(xSup, ySup, zSup){};