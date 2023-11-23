//Progam by FaishalNafi' 02/11/23
#include <iostream>
using namespace std;

//start
int main() {
    //variabel
    int tahun;
    char loop = 'y';
    
    //looping
    while (loop=='y'){
        //code program
        
        //looping program
        cout << "\n__________________\n";
        cout << "Apakah anda ingin mengulang program? [y/n]: ";
        cin >> loop;
        if(loop == 'n'){
            cout << "Program berakhir, terimakasih :)." << endl;
            break;
        }
    }
}//end