#include <iostream>
using namespace std;

int main() {
    int n;

    // Input jumlah suku bilangan
    cout << "Masukkan jumlah suku bilangan Fibonacci (n): ";
    cin >> n;

    // Inisialisasi variabel
    int a = 0, b = 1, c;

    // Cetak dua suku pertama
    cout << a << " " << b << " ";

    // Iterasi untuk mencetak n-2 suku berikutnya
    for (int i = 2; i < n; ++i) {
        c = a + b;
        cout << c << " ";

        // Update nilai a dan b untuk suku berikutnya
        a = b;
        b = c;
    }

    return 0;
}
