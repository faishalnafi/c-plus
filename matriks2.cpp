#include <iostream>
using namespace std;

int main() {
    int n = 3;

    //inisialisasi
    int A[n][n];

    //input
    cout << "Masukkan nilai matriks A:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    //output
    cout << "Menampilkan nilai matriks:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}