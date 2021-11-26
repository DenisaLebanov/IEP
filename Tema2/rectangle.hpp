#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle{
    private:
        int *lungime;
        int *latime;

    public:
        Rectangle(); // default constructor
        Rectangle(const Rectangle& rectangle); // copy constructor
        Rectangle(int lungime, int latime); // constructor parametrizat
        Rectangle& operator=(const Rectangle& rectangle); // default assignment operator
        ~Rectangle(); // destructor
        int getLungime();
        int getLatime();
};
#endif