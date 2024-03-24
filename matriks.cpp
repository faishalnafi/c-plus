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
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n+1; j++)
        {
            cout << "a[" << i << "][" << j <<"]= ";
            cin >> a[i][j];
        }
    }
    
    return 0;
}