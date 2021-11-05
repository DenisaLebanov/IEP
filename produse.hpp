#ifndef HEADER_P
#define HEADER_P

using namespace std;

class Produse{
    private:
        string denumireProdus;
        float pret;
        int cantitate;
    
    public:
        Produse(); // default constructor
        Produse(const Produse& produs); // copy constructor
        Produse(const string& denumireProdus, const float& pret, const int& cantitate); // constructor
        Produse& operator=(const Produse& produs) = delete; // default assignment operator
        ~Produse(); // destructor
        void afisareProdus();
        int pretTotal();
};

#endif