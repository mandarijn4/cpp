#include <iostream>
#include "vec3d.hpp"

class Foo {
public:
  Vec3D bar;
  Vec3D test;
  Foo(float num1, float num2, float num3, float num4, float num5, float num6): bar(num1, num2, num3), test(num4, num5, num6) {};
};

int main(void) {
  Foo news = Foo(42,8,2,3,4,5);
  news.bar.show("bar");
  news.test.show("test");
  return 0;
}