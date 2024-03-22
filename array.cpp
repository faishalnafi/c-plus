#include <iostream>

using namespace std;

// Fungsi untuk menghitung rata-rata elemen array
double hitungRataRata(const int arr[], int size) {
    if (size == 0) {
        return 0.0;
    }

    int jumlah = 0;
    for (int i = 0; i < size; ++i) {
        jumlah += arr[i];
    }

    return static_cast<double>(jumlah) / size;
}

int main() {
    const int panjangArray = 5;
    int bilangan[panjangArray];

    // Mengisi array dengan input pengguna
    cout << "Masukkan " << panjangArray << " bilangan bulat:\n";
    for (int i = 0; i < panjangArray; ++i) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> bilangan[i];
    }

    // Menghitung rata-rata bilangan dalam array
    double rataRata = hitungRataRata(bilangan, panjangArray);

    // Menampilkan hasil rata-rata
    cout << "Rata-rata bilangan adalah: " << rataRata << endl;

    // Menentukan apakah rata-rata tersebut genap atau ganjil
    if (static_cast<int>(rataRata) % 2 == 0) {
        cout << "Rata-rata bilangan adalah bilangan genap.\n";
    } else {
        cout << "Rata-rata bilangan adalah bilangan ganjil.\n";
    }

    return 0;
}
