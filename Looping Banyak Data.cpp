/*
Created By FaishalNafi'
Basic c++ programming class
*/
#include <iostream>
using namespace std;

//start program
int main() {
    //variabel
    int data;
    int i=1;
    double uts, uas;
    string nama;

    cout << "**********PROGRAM INPUTAN DATA**********";
    cout << "\n========================================\n";
    cout << "Masukkan banyak data: ";
    cin >> data;
    cout << "\n______________________________\n";

    //looping
    while(i<=data){

        //program
        string npm;
        cout << "masukkan nama: "; cin >> nama;
        cout << "NPM: "; cin >> npm;
        cout << "Nilai UTS: "; cin >> uts;
        cout << "Nilai UAS: "; cin >> uas;
        float rata = (uts+uas)/2;
        cout << "nilai rata-rata: " << rata << endl;
        cout << "\n______________________________\n";

        i++;
    }
    cout << "Program telah berakhir" << endl;

    return 0;
}//end program