#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student{
    private:
        int meetId;
        int password;

    public:
        Student(); // default constructor
        Student(const Student& student); // copy constructor
        Student(int meetId, int password); // constructor parametrizat
        Student& operator=(const Student& student) = delete; // default assignment operator
        ~Student(); // destructor
        int getMeetId();
        int getPassword();
        void afisare();
};
#endif