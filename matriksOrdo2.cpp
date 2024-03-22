#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan ordo matriks (baris/kolom): ";
    cin >> n;

    int A[10][10], B[10][10], C[10][10], D[10][10], E[10][10];

    cout << "Masukkan nilai matriks A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Masukkan nilai matriks B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> B[i][j];
        }
    }

    cout << "Isi nilai matriks A:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Isi nilai matriks B:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Isi nilai matriks C (A * B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            D[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Isi nilai matriks D (A + B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << D[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            E[i][j] = C[i][j] - D[i][j];
        }
    }

    cout << "Isi nilai matriks E (C - D):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << E[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}