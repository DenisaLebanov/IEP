#ifndef PERSOANA_H
#define PERSOANA_H

#include <iostream>

using namespace std;

class Persoana{
    private:
        int id_angajat;

    public:
        Persoana(); // default constructor
        Persoana(const Persoana& persoana); // copy constructor
        Persoana(int id_angajat); // constructor parametrizat
        Persoana& operator=(const Persoana& persoana) = delete; // default assignment operator
        ~Persoana(); // destructor
        long int getIdAngajat();
        void afisare();
};
#endif