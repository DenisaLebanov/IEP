#include <iostream>
#include "magazin.hpp"

using namespace std;

Magazin::Magazin() : denumire(""), numarAngajati(0), adresa("") { }

Magazin::Magazin(const string& denumire, const int& numarA, const string& adresa){
    this->denumire = denumire;
    numarAngajati = new int;
    *numarAngajati = numarA;
    this->adresa = adresa;
}

Magazin::Magazin(const Magazin& magazin){
    this->denumire = magazin.denumire;
    numarAngajati = new int;
    *numarAngajati = *(magazin.numarAngajati);
    this->adresa = magazin.adresa;
}

Magazin::~Magazin() {
    delete numarAngajati;
    cout << "Destuctor deep copy";
    cout << endl;
}

int Magazin::getAngajati(){
    return *numarAngajati;
}

void Magazin::afisare(){
    cout<<"Magazinul se numeste: "<<this->denumire<<endl;
    cout<<"Are "<<this->getAngajati()<<" angajati"<<endl;
    cout<<"Adresa este: "<<this->adresa<<endl;
    cout << endl;
}
