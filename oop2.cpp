#include <iostream>
using namespace std;

class bangunDatar{
    //akses modifer
    private:
        float panjang,lebar ;
    public :
        float luas;

        void input(){//methode input persegi panjang

            cout << "Masukan Panjangnya : ";
            cin >> panjang;
            cout << "Masukan Lebarnya : ";
            cin >> lebar;
        }

        float hitungLuas(){
            return panjang * lebar;
        }

};