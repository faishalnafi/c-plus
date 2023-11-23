/*
Created By FaishalNafi'
Basic c++ programming class
*/
#include <iostream>
using namespace std;

int main () {
    double a, b, c, d;
    int r;

    // Meminta User untuk memasukkan nilai
    cout << "Masukkan nilai Quiz1: ";
    cin >> a;
    cout << "Masukkan nilai Quiz2: ";
    cin >> b;
    cout << "Masukkan nilai UTS: ";
    cin >> c;
    cout << "Masukkan nilai UAS: ";
    cin >> d;
    cout << "====================\n";

    //Rata-rata
    r = (a+b+c+d)/4;

    //Output dari input yang diberikan user
    cout << "Rata-rata nilai anda adalah " << r << " \n";
    
    if ( r < 55){
        cout << "Nilai Abjad/Predikat: E" << endl;
    }
    else if ( r <= 64){
        cout << "Nilai Abjad/Predikat: D" << endl;
    }
    else if ( r <= 74){
        cout << "Nilai Abjad/Predikat: C" << endl;
    }
    else if ( r <= 84){
        cout << "Nilai Abjad/Predikat: B" << endl;
    }
    else if ( r <= 100){
        cout << "Nilai Abjad/Predikat: A" << endl;
    }
    else {
        cout << "Nilai Abjad/Predikat: Tidak Ditemukan" << endl;
    }

    return 0;
}