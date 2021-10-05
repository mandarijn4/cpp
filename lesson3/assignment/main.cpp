#include <iostream>
#include <cmath>
#include <vector>
#include <limits>
#include "vec3d.hpp"
#include "ray.hpp"
#include "sphere.hpp"

namespace st = std;


int main(){
    float min = st::numeric_limits<float>::min();
    float max = st::numeric_limits<float>::max();

    st::vector<Ray> rays = st::vector<Ray>();
    rays.push_back(Ray(min, 0.23, -1, max, 0, 0));
    rays.push_back(Ray(0.4, min, -1.2, 0, max, 0));
    rays.push_back(Ray(0.7, -0.15, min, 0, 0, max));

    st::vector<Sphere> spheres = st::vector<Sphere>();
    spheres.push_back(Sphere (-0.4, 0.23, -1, 0.4));
    spheres.push_back(Sphere (0.4, 0.4, -1.2, 0.3));
    spheres.push_back(Sphere (0.7, -0.15, -1.5, 0.2));

    for (Sphere sphere: spheres){
        for (Ray ray: rays){
            if (sphere.hit(ray))    
            {
                sphere.hitPoint(ray).show();
            }
            
        }
    }
    
}