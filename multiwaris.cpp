#include <iostream>
using namespace std;

class orang {
public:
    int umur;
    orang(int pUmur) :
        umur(pUmur) 
        {
            cout << "orang dibuat dengan umur\n " << umur << endl;
        }
    };
    
class pekerja : virtual public orang {
public:
    pekerja(int pUmur) : 
    orang(pUmur) {
        cout << "pekerja dibuat\n " << umur << endl;
    }
};

class pelajar : virtual public orang {
public:
    pelajar(int pUmur) : 
    orang(pUmur) {
        cout << "pelajar dibuat\n " << umur << endl;
    }
};

class budi : public pekerja, public pelajar {
public:

    budi(int pUmur) : 
    orang(pUmur), pekerja(pUmur), pelajar(pUmur) {
        cout << "budi dibuat\n " << umur << endl;
    }
};

int main() {
    budi a(12);
    return 0;
}