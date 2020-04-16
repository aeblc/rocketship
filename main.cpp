#include <iostream>
#include <rocketship/geometry.hpp>

int main(){
    std::cout << "hello\n";

    /*auto a = new rckt::Triangle;

    delete a; */

    rckt::Point3D x;
    x.coordinates_[0] = 3;
    x.coordinates_[1] = 5;
    x.coordinates_[2] = 7;

   rckt::Point3D y;

    y = x;

    std::cout << y.coordinates_[0] << std::endl;


    return 0;
}