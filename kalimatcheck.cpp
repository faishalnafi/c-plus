#include <iostream>
#include <cctype> // Untuk isupper() dan islower()
#include <algorithm> // Untuk reverse()

using namespace std;

int main() {
    string kalimat;

    // Input kalimat
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Inisialisasi variabel
    int jumlahHuruf = 0, jumlahKata = 1, jumlahHrfBsr = 0, jumlahHrfKcl = 0;

    // Menghitung jumlah huruf, kata, huruf besar, dan huruf kecil
    for (char karakter : kalimat) {
        jumlahHuruf++;
        if (karakter == ' ') {
            jumlahKata++;
        }
        if (isupper(karakter)) {
            jumlahHrfBsr++;
        }
        if (islower(karakter)) {
            jumlahHrfKcl++;
        }
    }

    // Output hasil perhitungan
    cout << "Jumlah Huruf: " << jumlahHuruf << endl;
    cout << "Jumlah Kata: " << jumlahKata << endl;
    cout << "Jumlah Huruf Besar: " << jumlahHrfBsr << endl;
    cout << "Jumlah Huruf Kecil: " << jumlahHrfKcl << endl;

    // Membalik kalimat
    string kalimatTerbalik = kalimat;
    reverse(kalimatTerbalik.begin(), kalimatTerbalik.end());

    // Output kalimat yang dibalik
    cout << "Kalimat Terbalik: " << kalimatTerbalik << endl;

    // Mengganti huruf besar dan kecil secara terpisah
    for (char &karakter : kalimat) {
        if (isupper(karakter)) {
            karakter = tolower(karakter);
        }
    }
    // Output kalimat setelah penggantian huruf
    cout << "Kalimat setelah mengganti huruf besar dan kecil terpisah: " << kalimat << endl;

    for (char &karakter : kalimat) {
        if (islower(karakter)) {
            karakter = toupper(karakter);
        }
    }
    // Output kalimat setelah penggantian huruf
    cout << "Kalimat setelah mengganti huruf besar dan kecil terpisah: " << kalimat << endl;

    return 0;
}
