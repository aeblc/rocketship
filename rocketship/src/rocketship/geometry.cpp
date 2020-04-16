#include "geometry.hpp"
#include <iostream>

using namespace rckt;


void Point3D::operator=(const Point3D& a){
     for(int i=0; i<3 ; ++i) this->coordinates_[i] = a.coordinates_[i];
}

// example
Triangle::Triangle(Point3D vertex){
    vertices_[0] = vertex;
    std::cout << "created ";
};

void Triangle::setVertices(const Point3D &vertices){
    
    
    //for(int i=0; i<3 ; ++i ) { vertices_[i] = vertices[i]; };

}