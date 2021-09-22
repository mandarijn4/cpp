#include <iostream>

namespace st = std;

struct Vec3D
{
    float x,y,z;
};

Vec3D vec3D (float x, float y, float z){
    struct Vec3D created;
    created.x = x;
    created.y = y;
    created.z = z;
    return created;
}

void show (){
    st::cout << st::endl;
}

void show (st::string label, Vec3D const &self){
    st::cout << "De x-coordinaat van de vector met de naam " << label << " is " << self.x << st::endl;
    st::cout << "De y-coordinaat van de vector met de naam " << label << " is " << self.y << st::endl;
    st::cout << "De z-coordinaat van de vector met de naam " << label << " is " << self.z << st::endl;
    show();
}

void show (st::string label, float scalar){
    st::cout << "De scalar behorend bij het label " << label << " is " << scalar << st::endl;
    show();
}

Vec3D minus (Vec3D const &self){
    return vec3D(-self.x, -self.y, -self.z);
}

Vec3D add (Vec3D const &self, Vec3D const &other){
    return vec3D(self.x + other.x, self.y + other.y, self.z + other.z);
}

Vec3D sub (Vec3D const &self, Vec3D const &other){
    return vec3D(self.x - other.x, self.y - other.y, self.z - other.z);
}

Vec3D mul (Vec3D const &self, float scalar){
    return vec3D(self.x * scalar, self.y * scalar, self.z * scalar);
}

int main(){
    struct Vec3D random = vec3D(3, 8, 4);
    struct Vec3D other = vec3D(6, 2, 5);
    show();
    show("random", random);
    show("alpha", 8);
    struct Vec3D invert = minus(random);
    show("inverted", invert);
    struct Vec3D resultAdd = add(random, other);
    show("result", resultAdd);
    struct Vec3D resultSub = sub(random, other);
    show("result", resultSub);  
    struct Vec3D resultMul = mul(random, 8);
    show("result", resultMul);      
}