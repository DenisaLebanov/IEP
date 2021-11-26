#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle{
    protected:
        int raza;

    public:
        Circle(); // default constructor
        Circle(const Circle& circle); // copy constructor
        Circle(int raza); // constructor parametrizat
        Circle& operator=(const Circle& circle) = delete; // default assignment operator
        int getRaza();
};
#endif