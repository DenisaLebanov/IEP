#include <iostream>
#include "cylinder.hpp"
#include "circle.hpp"

using namespace std;

Cylinder::Cylinder() : Circle(), inaltime(0){
    cout<<"Constructor default - Cylinder"<<endl;
};

Cylinder::Cylinder(int raza, int inaltime) : Circle(raza), inaltime(inaltime){
    cout<<"Construct parametrizat - Cylinder"<<endl;
}

Cylinder::Cylinder(const Cylinder& cylinder) : Circle(cylinder), inaltime(cylinder.inaltime){
    cout<<"Copy constructor - Cylinder"<<endl;
}