/*
Created By FaishalNafi'
Basic c++ programming class
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int alas, tinggi, miring, luas, keliling, pilihan;

    //Masukkan Pilihan
    cout << "Masukkan Angka Saja \n";
    cout << "=================== \n";
    cout << "1. Sisi Miring\n";
    cout << "2. Luas Segitiga\n";
    cout << "3. Keliling Segitiga\n";
    cout << "=================== \n";
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;

    //program
    //sisi miring
    if (pilihan==1) {
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;

        miring = sqrt(pow(alas,2)+pow(tinggi,2));
        cout << "Sisi miring segitiga siku-siku adalah " << miring << endl;
    }
    //luas
    else if (pilihan==2) {
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;

        luas = alas*tinggi/2;
        cout << "Luas segitiga siku-siku adalah " << luas << endl;
    }
    //keliling
    else if (pilihan==3) {
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;

        miring = sqrt(pow(alas,2)+pow(tinggi,2));
        keliling = alas+tinggi+miring;
        cout << "Keliling segitiga siku-siku adalah " << keliling << endl;
    }
    else {
        cout << "Masukan anda tidak terdeteksi :(" << endl;
    }

    return 0;
}