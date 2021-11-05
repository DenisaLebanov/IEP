#include <iostream>
#include "produse.hpp"

using namespace std;

Produse::Produse(): denumireProdus(""), pret(0), cantitate(0) { }

Produse::Produse(const string& denumireProdus, const float& pret, const int& cantitate){
    this->denumireProdus = denumireProdus;
    this->pret = pret;
    this->cantitate = cantitate;
}

Produse::Produse(const Produse& produs){
    this->denumireProdus = produs.denumireProdus;
    this->pret = produs.pret;
    this->cantitate = produs.cantitate;
}

Produse::~Produse() {
    cout << "Destructor apelat"<<endl;
}

void Produse::afisareProdus(){
    cout<<"Denumirea produsului este: "<<this->denumireProdus<<endl;
    cout<<"In stoc exista: "<<this->cantitate<<" bucati"<<endl;
    cout<<"Pretul pe bucata: "<<this->pret<<" ron"<<endl;
    cout << endl;
}

int Produse::pretTotal() {
    float total = 0;
    total = this->cantitate * this->pret;
    return total;
}
