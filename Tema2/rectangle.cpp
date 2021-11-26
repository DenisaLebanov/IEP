#include <iostream>
#include "rectangle.hpp"

using namespace std;

Rectangle::Rectangle() : lungime(0), latime(0) {
    this->latime = new int;
    *this->latime = 0;
    this->lungime = new int;
    *this->lungime = 0;
    cout << "Constructor default - Rectangle" << endl;
}

Rectangle::Rectangle(int lungime, int latime){
    this->latime = new int;
    *this->latime = latime;
    this->lungime = new int;
    *this->lungime = lungime;
    cout << "Constructor parametrizat - Rectangle" << endl;
}

Rectangle::Rectangle(const Rectangle& rec){
    latime = new int;
    *latime = *rec.latime;
    lungime = new int;
    *lungime = *rec.lungime;
    cout << "Copy constructor - Rectangle" << endl;
}

Rectangle& Rectangle::operator=(const Rectangle& rectangle){
    if(this == &rectangle){
        cout<<"Self assignment"<<endl;
        return *this;
    }
    delete this->lungime;
    delete this->latime;
    latime = new int;
    *latime = *rectangle.latime;
    lungime = new int;
    *lungime = *rectangle.lungime;
    return *this;
}

Rectangle::~Rectangle(){
    delete lungime;
    delete latime;
    cout<<"Destructor - Rectangle"<<endl;
}

int Rectangle::getLatime(){
    return *latime;
}

int Rectangle::getLungime(){
    return *lungime;
}
