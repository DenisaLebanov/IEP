#include <iostream>
#include "produse.hpp"
#include "magazin.hpp"

using namespace std;

int main(){
    Magazin magazin1 = Magazin("Lidl", 1000, "Arad, str. I. Creanga");
    Magazin magazin2 = magazin1;
    Produse produs1 = Produse("Apa", 1.8, 100);
    Produse produs2;

    produs2.afisareProdus();

    magazin1.afisare();
    magazin2.afisare();
    cout<<"Pretul total al produsului este: "<<produs1.pretTotal()<<endl;
    cout << endl;
}