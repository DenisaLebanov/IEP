#ifndef HEADER_M
#define HEADER_M

using namespace std;

class Magazin{
    private:
        string denumire;
        int* numarAngajati;
        string adresa;
    
    public:
        Magazin(); // default constructor
        Magazin(const Magazin& magazin); // copy constructor
        Magazin(const string& denumire, const int& numarAngajati, const string& adresa); // constructor
        Magazin& operator=(const Magazin& produs) = delete; // default assignment operator
        ~Magazin(); // destructor
        void afisare();
        int getAngajati();
};

#endif