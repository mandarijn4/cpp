#include <iostream>
#include <cmath>
#include "ray.hpp"
#include "vec3d.hpp"
#include "object.hpp"

namespace st = std;

typedef st::vector<Object*> VPO;

Ray::Ray(float xStart, float yStart, VPO &objects): 
                support(Vec3D(0, 0, 3.0)), 
                direction(Vec3D(xStart, yStart, 0).sub(support).unit()), 
                objects(objects){
};

bool Ray::scan(){
    for (Object object: objects){
        object.hit(this);
    }
}