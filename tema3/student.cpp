#include <iostream>
#include "student.hpp"

using namespace std;

Student::Student() : meetId(0), password(0) {
    cout << "Constructor default" << endl;
}

Student::Student(int meetId, int password){
    this->meetId = meetId;
    this->password = password;
    cout << "Constructor parametrizat" << endl;
}

Student::Student(const Student& stud){
    meetId = stud.meetId;
    password = stud.password;
    cout << "Copy constructor" << endl;
}

Student::~Student(){
    cout << "Destructor" << endl;
}

int Student::getMeetId(){
    return meetId;
}

int Student::getPassword(){
    return password;
}

void Student::afisare() {
    cout << "Meeting: " << getMeetId() << " Password: " << getPassword();
    cout << endl;
}