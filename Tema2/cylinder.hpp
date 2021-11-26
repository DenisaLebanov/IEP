#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.hpp"

#include <iostream>

using namespace std;

class Cylinder : public Circle{
    private:
        int inaltime;

    public:
        Cylinder(); // default constructor
        Cylinder(const Cylinder& cylinder); // copy constructor
        Cylinder(int raza, int inaltime); // constructor parametrizat
        Cylinder& operator=(const Cylinder& cylinder) = delete; // default assignment operator
};
#endif