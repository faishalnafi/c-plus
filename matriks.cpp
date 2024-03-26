/*
Created By FaishalNafi'
C++ programming class
Matriks Eliminasi Gaus
*/
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#define SIZE 10
using namespace std;

int main() {
    float a[SIZE][SIZE], x[SIZE], ratio;
    int i,j,k,n;

    //Presisi Nilai;
    cout << setprecision(3) << fixed;

    /*Input nilai matriks*/
    /*Definisi nilai matriks*/
    cout << "Masukkan ukuran matriks: ";
    cin >> n;

    /*Input value matriks*/
    cout << "Masukkan nilai angka tiap elemen matriks: \n";
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n+1; j++) {
            cout << "a[" << i << "][" << j <<"]= ";
            cin >> a[i][j];
        }
    }

    /*Operasi Gaus Gasus*/
    for (i = 1; i <= n+1; i++) {
        if (a[i][i] == 0.0) {
            cout << "Perhitungan Matematis Matriks Error !!";
            cout << "Cek Angka yang dimasukkan !!!";
            exit(0);
        }

        for (j = i+1; i <= n; j++) {
            ratio = a[j][i]/a[i][i];
            for (k=1; k<=n; k++) {
                a[j][k] = a[j][k] - ratio*a[i][k];
            }
        }
    }

    /*Menghitung xyz dengan subsitusi balik*/
    x[n] = a[n][n+1]/a[n][n];
    for (i = n-1; i >= 1; i--) {
        x[i] = a[i][n+1];
        for (j = i+1; j <= n; j++) {
            x[i] = x[i]-x[i][j]*x[j];
        }
        x[i] = x[i]/a[i][i];
    }
    
    return 0;
}