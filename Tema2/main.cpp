#include <iostream>
#include "rectangle.hpp"
#include "circle.hpp"
#include "cylinder.hpp"

using namespace std;

int main(){

    cout << "Item 10" << endl;

    Rectangle r1;
    Rectangle r2(1, 2);
    Rectangle r3(4, 5);

    (r1 = r2) = r3;

    cout<< r1.getLatime()<<" "<<r1.getLungime()<<endl;
    cout<< r2.getLatime()<<" "<<r2.getLungime()<<endl;
    cout<< r3.getLatime()<<" "<<r3.getLungime()<<endl;

    // int a = 5;
    // int *b = &a;
    // int *c = &a;

    // if(b == c)
    //     cout<<*c;

    cout << endl;
    cout << "Item 11" << endl;

    Rectangle *r4;
    r4 = &r3;
    Rectangle *r5;
    r5 = &r3;
    *r4 = *r5;

    cout << endl;
    cout << "Item 12" << endl;

    Circle circle1(5);
    cout << endl;
    Circle circle2 = circle1;
    cout << endl;
    Circle circle3;
    cout << endl;
    Cylinder cylinder1(7, 10);
    cout << endl;
    Cylinder cylinder2 = cylinder1;
    cout << endl;
    Cylinder cylinder3;
}
