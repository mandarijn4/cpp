#include <iostream>
#include <cmath>

namespace st = std;

struct Vec3D{float x,y,z;};

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

Vec3D div (Vec3D const &self, float scalar){
    return vec3D(self.x / scalar, self.y / scalar, self.z / scalar);
}

float norm(Vec3D const &self){
    return sqrt(pow(self.x, 2) + pow(self.y, 2) + pow(self.z, 2));
}

Vec3D unit(Vec3D const &self){
    auto currentNorm = norm(self);
    return vec3D((self.x * 1/currentNorm), (self.y * 1/currentNorm), (self.z * 1/currentNorm));
}

float dot(Vec3D const &self, Vec3D const &other){
    return (self.x * other.x + (self.y * other.y) + (self.z * other.z));
}

Vec3D cross(Vec3D const &self, Vec3D const &other){
    return vec3D(((self.y * other.z) - (self.z * other.y)), ((self.z * other.x) - (self.x * other.z)), ((self.x * other.y) - (self.y * other.x)));
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
    struct Vec3D resultDiv = div(random, 8);
    show("result div", resultDiv); 
    st::cout << "Result norm: " << norm(random) << '\n';
    show("unitPorduct", unit(random));
    show("dotProduct", dot(random, other));
    show("crossProduct", cross(random, other));
}