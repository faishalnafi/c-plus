#include<iostream>
using namespace std;
const int N = 3;
int main() {
    int matriks[N][N];
    cout << "Masukkan nilai matriks X (ordo 3x3):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        cout << "A[" << i << "][" << j << "] = ";
        cin >> matriks[i][j];
        }
    }
    cout << "Matriks X:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        cout << matriks[i][j] << " ";
        }
    cout << endl;
    }
    cout << "Output Determinan Matrix X" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
        cout << "A[" << i << "][" << j << "] = ";
        cout << matriks[i][j] << " ";
        }
    cout << endl;
    }
    cout << "\nPerhitungan Diagonal Utama\n";
    int detDiagonalUtama = 0;
        for (int i = 0; i < N; i++) {
        int prod = 1;
        for (int j = 0; j < N; j++) {
            cout<< "[" << i << "," << j << "] ";
            prod *= matriks[j][(i + j) % N];
            if (j < N - 1) {
            cout << "* ";
            }
        }
        detDiagonalUtama += prod;
        cout << "= " << prod << endl;
    }
    cout << "\nHasil Diagonal Utama X = " << detDiagonalUtama << endl;
    cout << "\nPerhitungan Diagonal Sekunder\n";
    int detDiagonalSekunder = 0;
    for (int i = 0; i < N; i++) {
        int prod = 1;
        for (int j = 0; j < N; j++) {
            cout << "[" << i << "," << (N - 1 - i + j) % N << "] ";
            prod *= matriks[j][(N - 1 - i - j + N) % N];
            if (j < N - 1) {
            cout << "* ";
            }
        }
        detDiagonalSekunder += prod;
        cout << "= " << prod << endl;
    }
    cout << "\nHasil Diagonal Sekunder X = " << detDiagonalSekunder << endl;
    cout << "\nNilai Determinant Matrix = " << detDiagonalUtama << ' - ' << detDiagonalSekunder << " =
    " << detDiagonalUtama-detDiagonalSekunder;
    return 0;
}