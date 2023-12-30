#include <iostream>
using namespace std;

int main() {
    //inisialisasi
    int A[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    //menampilkan secara horizontal
    cout << "Matrik A horizontal\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    //menampilkan secara vertikal
    cout << "\nMatrik A vertikal\n";
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}