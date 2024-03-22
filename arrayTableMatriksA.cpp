#include <iostream>
using namespace std;

int main() {
    for (int j = 0; j < 5; j++)
        {
            if (j==0){
                cout << ".......  ";
            } else {
                cout << "Kolom" << j-1 << "   ";
            }
        }
    cout << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Baris " << i << "  ";
        for (int j = 0; j < 4; j++)
        {
            cout << "A[" << i << "][" << j << "]  ";
        }
        cout << endl;
    }

    return 0;
}