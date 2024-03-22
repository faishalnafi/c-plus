#include <iostream>
#include <vector>
using namespace std;
int userInput;

int perulangan(int angka) {
    int jumlah = 0;
    while (angka > 0) {
        if (angka % 10 == userInput) {
            jumlah += 1;
        }
        angka /= 10;
    }
    return jumlah;
}

void teks() {
    vector<int> hasilPerulangan;
    for (int i = 0; i <= 100; ++i) {
        int hasilPerulanganI = perulangan(i);
        if (hasilPerulanganI > 0) {
            hasilPerulangan.push_back(i);
        }
    }

    cout << "Dari angka 0 - 100 yang memiliki nilai " << userInput << " yang sama sebanyak " << hasilPerulangan.size() << " angka" << endl;
    cout << "Yaitu: ";
    
    for (size_t i = 0; i < hasilPerulangan.size(); ++i) {
        cout << hasilPerulangan[i];
        if (i < hasilPerulangan.size() - 1) {
            cout << " ";
        }
    }

    cout << endl;
}

int main() {
    cout << "Inputkan Nilai 0-100 = ";
    cin >> userInput;

    while (true) {
        if (userInput >= 0 && userInput <= 100) {
            teks();
            break;
        } else {
            cout << "Data Salah. Inputkan Nilai 0-100 = ";
            cin >> userInput;
        }
    }

    return 0;
}
