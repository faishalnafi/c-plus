#include <iostream>
using namespace std;

int main() {
    int s, t, r, v, input;
    int phi = 3.14;

    cout << "Masukkan sisi miring: ";
    cin >> s;
    cout << "Masukkan tinggi: ";
    cin >> t;
    cout << "Masukkan jari-jari: ";
    cin >> r;
    cout << "==============================\n";
    cout << "Pilih pilihan dibawah ini menggunakan angka\n";
    cout << "1. Menghitung volume kerucut.\n";
    cout << "2. Menghitung luas permukaan kerucut.\n";
    cout << "==============================\n";
    cout << "Masukkan pilihan: ";
    cin >> input;

    if (input == 1)
    {
        v = (phi*r*r)/3*t;
        cout << "Volume dari kerucut adalah " << v << endl;
    } else {
        v = phi*r*(s+t);
        cout << "Luas permukaan dari kerucut adalah " << v << endl;
    }
    
    return 0;
}