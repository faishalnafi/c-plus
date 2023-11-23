/*
Created By FaishalNafi'
Basic c++ programming class
*/
#include <iostream>
using namespace std;

//start program
int main() {
    //variabel
    int a, b, c;
    char loop = 'y';
    
    while(loop == 'y'){
        //code program
        cout << "******** PROGRAM MENCETAK KELIPATAN **********";
        cout << "\n==============================================\n";
        cout << "Masukkan angka yang ingin dicari kelipatannya >> ";
        cin >> a;
        cout << "Masukkan angka awal : ";
        cin >> b;
        cout << "Masukkan angka akhir: ";
        cin >> c;
        cout << "Kelipatan bilangan " << a << " antara " << b << " sampai dengan " << c << " adalah =>=>=> " << endl;
        
        //process program
        for (int i=b; i<=c; i++){
            if(i%a == 0){
                cout << i << ", ";
            }
        }
        
        //Looping program
        cout << "\n__________________\n";
        cout << "Apakah anda ingin mengulang program? [y/n]: ";
        cin >> loop;
        if(loop == 'n'){
            break;
        }
    }
    cout << "Progam telah berakhir, Terimakasih :).";
    cout << "\n==============================================\n" << endl;
    
    return 0;
} //end program