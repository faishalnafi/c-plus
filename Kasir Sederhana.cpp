/*
Created By FaishalNafi'
Basic c++ programming class
*/
#include <iostream>
using namespace std;

//start program
int main() {
    //variabel program
    string namabarang;
    int jumlahbarang, pilihan;
    double hargabarang, ppn, bayar, diskon=5, totalharga = 0;    
    
    //output progeam
    cout << "==========================================================================\n";
    cout << "                        <<      NAFI' PLAZA      >>                       \n";
    cout << "                        <<   HOKKY SUPERMARKET   >>                       \n";
    cout << "==========================================================================\n";
    cout << "==========================================================================\n";
    cout << "    ***                            MENU                         ***       \n";
    cout << "1. Ice Americano  Rp. 10,000" << "             " << "6. Rice Bowl Chicken  Rp. 16,000" << "\n";
    cout << "2. Ice Lychee Tea Rp. 12,000" << "             " << "7. Ice Coffee Latte   Rp. 19,000" << "\n";
    cout << "3. Fried Rice     Rp. 16,000" << "             " << "8. Spagheti Carbonara Rp. 27,000" << "\n";
    cout << "4. Mango Mint     Rp. 16,000" << "             " << "9. Ice Matcha Latte   Rp. 19,000" << "\n";
    cout << "5. French Fries   Rp. 15,000" << "             " << "10. Selesai" << "\n";
    cout << "__________________________________________________________________________\n";
    
    //looping menu
    while(true){
        cout << "Masukkan no pilihan: ";
        cin >> pilihan;
        if(pilihan==10){
            break;
        }

        //percabangan switch case
        switch(pilihan){
            case 1:
                namabarang = "Ice Americano";
                hargabarang = 10;
                break;
            case 2:
                namabarang = "Ice Lychee Tea";
                hargabarang = 12;
                break;
            case 3:
                namabarang = "Fried Rice";
                hargabarang = 16;
                break;
            case 4:
                namabarang = "Mango Mint";
                hargabarang = 16;
                break;
            case 5:
                namabarang = "French Fries";
                hargabarang = 15;
                break;
            case 6:
                namabarang = "Rice Bowl Chicken";
                hargabarang = 16;
                break;
            case 7:
                namabarang = "Ice Coffee Latte";
                hargabarang = 19;
                break;
            case 8:
                namabarang = "Spagheti Carbonara";
                hargabarang = 27;
                break;
            case 9:
                namabarang = "Ice Matcha Latte";
                hargabarang = 19;
                break;
            default:
                cout << "Pilihan anda tidak valid.\n";
                continue;
        }

        //calculate Program
        cout << "Masukkan jumlah barang: ";
        cin >> jumlahbarang;
        double subTotal = jumlahbarang*hargabarang;
        totalharga +=subTotal;
        //output Subtotal
        cout << jumlahbarang << " " << namabarang << " = Rp. " << subTotal << ",000" << endl;
    }

    //total
    cout << "==========================================================================\n";
    cout << "Total pembayaran: Rp. " << totalharga*1000 << endl;
    //ppn
    ppn = (totalharga*1.11)*1000;
    cout << "Subtotal PPN 11%: Rp. " << ppn << endl;
    cout << "Diskon NAFI' PLAZA sebesar " << diskon << "%." << endl;
    diskon = ppn-(ppn*diskon/100);
    cout << "Uang pembayaran: ";
    cin >> bayar;
    int kembalian = bayar-diskon;
    
    //check pembayaran
    while (bayar<diskon) {
        cout << "Mohon maaf uang anda tidak mencukupi." << endl;

        cout << "Uang pembayaran: ";
        cin >> bayar;
        int kembalian = bayar-diskon;
        if (bayar>=diskon) {
            break;
        }
    }
    cout << "Uang kembalian anda: Rp. " << kembalian << endl;
    cout << "Terimakasih telah berbelanja di ITATS PLAZA :)" << endl;
    cout << "==========================================================================\n";

    return 0;
} //end program