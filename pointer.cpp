#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct kelompok {
  string nama[2];
  string email;
  string pengguna;
  int umur;
};

void dataMasuk(kelompok &data) {
  cout << "Nama depan: ";
  cin >> data.nama[0];
  cout << "Nama belakang: ";
  cin >> data.nama[1];
  cout << "Surel: ";
  cin >> data.email;
  cout << "Nama pengguna: ";
  cin >> data.pengguna;
  cout << "Usia: ";
  cin >> data.umur;
}

int main() {
  vector<kelompok> data; // Deklarasi vector untuk menyimpan data

  // Looping input data
  int id;
  cout << "Jumlah data yang ingin diinput: ";
  cin >> id;

  for (int i = 0; i < id; i++) {
    cout << "\nData ke-" << i + 1 << endl;
    kelompok temp; // Buat variabel temporer untuk menyimpan data
    dataMasuk(temp);
    data.push_back(temp); // Tambahkan data ke vector
  }

  // Menampilkan data
  cout << "\n====================\n";
  for (int i = 0; i < id; i++) {
    cout << "Id             : " << i + 1 << endl;
    cout << "Nama Lengkap   : " << data[i].nama[0] << " " << data[i].nama[1] << endl;
    cout << "Surel          : " << data[i].email << endl;
    cout << "Username       : " << data[i].pengguna << endl;
    cout << "Usia           : " << data[i].umur << "\n" << endl;
  }

  return 0;
}
