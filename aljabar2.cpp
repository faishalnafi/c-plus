#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#define SIZE 10
using namespace std;

int main () {
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], d[SIZE][SIZE];int i, j, k, n;

    //Presisi
    cout << setprecision(3) << fixed;

    //Input Matriks
    cout << "Masukkan Ukuran Matriks : ";cin >> n;
    cout << endl;
    cout << "Masukkan elemen Matriks A" << endl;for (i=1;i<=n;i++)
    for (j=1;j<=n;j++) {
    cout << "a[" << i << "][" << j << "] : ";cin >> a[i][j];
    }
    cout << "Masukkan elemen Matriks B" << endl;for (i=1;i<=n;i++)
    for (j=1;j<=n;j++) {
    cout << "b[" << i << "][" << j << "] : ";cin >> b[i][j];
    }
    cout << "Tampilkan elemen Matriks A" << endl;
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            cout << a[i][j] << "\t ";
        }
        cout << endl;
    }
    cout << "Tampilkan elemen Matriks B" << endl;
    
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++) {
            cout << b[i][j] << "\t ";
        }
        cout << endl;
    }

    // Penjumlahan Matriks
    cout << "Tampilkan elemen Matriks A+B" << endl;
    for (i=1;i<=n;i++) {
        for (j=1;j<=n;j++) {
            c[i][j] = a[i][j] + b[i][j];cout << c[i][j] << "\t ";
        }
        cout << endl;
    }

    //Perkalian Matriks//Menghitung Matriksfor (i=1;i<=n;i++)
    for (j=1;j<=n;j++) {
        d[i][j] = 0;
        for (k=1;k<=n;k++) {
            d[i][j] += a[i][k] * b[k][j];
        }
    }
    cout << "Tampilkan elemen Matriks A X B" << endl;for (i=1;i<=n;i++)
    for (j=1;j<=n;j++) {
        cout << d[i][j] << "\t ";
    }
    cout << endl;
    return 0;
}