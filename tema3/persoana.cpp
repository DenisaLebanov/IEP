#include <iostream>
#include "persoana.hpp"

using namespace std;

Persoana::Persoana() : id_angajat(0) {
    cout << "Constructor default" << endl;
}

Persoana::Persoana(int id_angajat){
    this->id_angajat = id_angajat;
    cout << "Constructor parametrizat" << endl;
}

Persoana::Persoana(const Persoana& pers){
    id_angajat = pers.id_angajat;
    cout << "Copy constructor" << endl;
}

Persoana::~Persoana(){
    cout << "Destructor" << endl;
}

long int Persoana::getIdAngajat(){
    return id_angajat;
}

void Persoana::afisare() {
    cout << "ID angajat: " << getIdAngajat();
    cout << endl;
}