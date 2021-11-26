#include <iostream>
#include "circle.hpp"

using namespace std;

Circle::Circle() : raza(0){
    cout << "Constructor default - Circle" << endl;
};

Circle::Circle(int raza){
    this->raza = raza;
    cout << "Constructor parametrizat - Circle" << endl;
}

Circle::Circle(const Circle& circle){
    raza = circle.raza;
    cout << "Copy constructor - Circle" << endl;
}

int Circle::getRaza(){
    return raza;
}
