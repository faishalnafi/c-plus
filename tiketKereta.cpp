//Program Tiket Kereta
//Created By FaishalNafi'
//HakCipta 2019-2024
#include <iostream>
#include <string>
using namespace std;

//Menu Display
void kelasKereta() {
    cout << "Pilih kelas kereta:\n";
    cout << "1. Ekonomi (S) Rp. 200.000\n";
    cout << "2. Ekonomi (Q) Rp. 220.000\n";
    cout << "3. Ekonomi (CB) Rp. 250.000\n";
    cout << "4. Bisnis (N) Rp. 290.000\n";
    cout << "5. Bisnis (K) Rp. 310.000\n";
    cout << "6. Bisnis (BA) Rp. 350.000\n";
    cout << "7. Eksekutif (H) Rp. 490.000\n";
    cout << "8. Eksekutif (AB) Rp. 580.000\n";
}

//Kalkulasi
void menghitungHarga(int kelas, int jumlah) {
    int harga[] = {200000, 220000, 250000, 290000, 310000, 350000, 490000, 580000};
    if (kelas>=1 && kelas<=8)
    {
        int total = (harga[kelas-1]*jumlah)/1000;
        cout << "Total pembayaran untuk " << jumlah << " Penumpang kelas " << kelas << ": Rp. " << total << ".000" << endl;
    } else {
        cout << "Pilihan anda tidak valid.\n";
    }
}

//Program Utama
int main() {
    int kelas, jumlah;

    kelasKereta();
    cout << "Masukkan nomor kelas yang dipilih: ";
    cin >> kelas;
    cout << "Masukkan jumlah penumpang: ";
    cin >> jumlah;
    menghitungHarga(kelas,jumlah);

    return 0;
}