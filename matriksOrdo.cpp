#include <iostream>
using namespace std;

int main() {
    int n;

    // Input ordo matriks A
    cout << "Masukkan ordo matriks (baris/kolom): ";
    cin >> n;

    int A[10][10], B[10][10], C[10][10], D[10][10], E[10][10];

    // Input nilai matriks A
    cout << "Masukkan nilai matriks A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Input nilai matriks B
    cout << "Masukkan nilai matriks B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    // Tampilkan nilai matriks A
    cout << "Isi nilai matriks A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // Tampilkan nilai matriks B
    cout << "Isi nilai matriks B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // Hitung matriks C = A * B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Tampilkan nilai matriks C
    cout << "Isi nilai matriks C (A * B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Hitung matriks D = A + B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            D[i][j] = A[i][j] + B[i][j];
        }
    }

    // Tampilkan nilai matriks D
    cout << "Isi nilai matriks D (A + B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    // Hitung matriks E = C - D
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            E[i][j] = C[i][j] - D[i][j];
        }
    }

    // Tampilkan nilai matriks E
    cout << "Isi nilai matriks E (C - D):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << E[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}