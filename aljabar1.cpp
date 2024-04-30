#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#define SIZE 10
using namespace std;

int main (){
    float a[SIZE][SIZE], x[SIZE], ratio;int i, j, k, n;
    //Nilai pengatur Presisi
    cout << setprecision(3) << fixed;
    /*Input Matriks*///Menentukan Ukuran Matriks
    cout << "Masukkan ukuran matriks: ";cin >> n;
    //Memasukkan nilai angka matriks
    cout << "Masukkan nilai matriks Setiap elemen : " << endl;for (i=1;i<=n;i++)
    {for (j=1;j<=n+1;j++){
    cout << "a[" << i << "][" << j << "] =";cin >> a[i][j];
    }}
    //Penerapan Eliminasi Gaussfor (i=1;i<=n;i++)
    {
    if (a[i][i] == 0.0){
    cout << "Perhitungan Matriks Error";exit (0);
    }for (j=i+1;j<=n;j++)
    {
    ratio = a[j][i] / a[i][i];
    for (k=1;k<=n+1;k++){
    a[j][k] = a[j][k]-ratio*a[i][k];}
    }
    }

    //Menghitung nilai x y z dengan substitusi balikx[n] = a[n][n+1] / a[n][n];
    for (i=n-1;i>=1;i--) {
        x[i] = a[i][n+1];for(j=i+1;j<=n;j++){
        x[i] = x[i]-a[i][j]*x[j];}
        x[i] = x[i]/a[i][i];
    }

    //Menampilkan Hasil
    cout << endl << "Hasil Hitung" << endl;
    for (i=1;i<=n;i++){
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return(0);
}