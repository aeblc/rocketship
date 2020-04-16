#pragma once
#ifndef _GEOMETRY_HPP_
#define _GEOMETRY_HPP_

namespace rckt{


struct Point3D {
    double coordinates_[3];
    Point3D() {};
    ~Point3D() {};

     void operator= (const Point3D &a);
};

struct Vec3D {
    double components_[3];
    Vec3D() {};
    ~Vec3D(){};
};

class Triangle {

private:
    Point3D vertices_[3];
    Point3D center_;

public:
    Triangle(Point3D vertex);
    ~Triangle() {};
    
    void setVertices(const Point3D &vertices);
    Point3D* getVertices() { return vertices_; }
};



};


#endif