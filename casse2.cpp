#include <iostream>
using namespace std;

int main (){
    string jenis;
    int tarif, lama, total;

    cout << "======================================" << endl;
    cout << "|            TARIF PARKIR            |" << endl;
    cout << "======================================" << endl;
    cout << "" << endl;
    cout << "Terdapat dua jenis Kendaraan" << endl;
    cout << "1. Mobil" << endl;
    cout << "2. Motor" << endl;
    cout << "Inputkan Jenis Kendaraan(Motor/Mobil): " ;
    cin >> jenis;

    //percabangan
    if (jenis == "Mobil" || jenis == "mobil"){
        tarif = 3000;
    } else if (jenis == "Motor" || jenis == "motor"){
        tarif = 2000;
    } else {
        cout << "Jenis kendaraan tidak valid";
        return 0;
    }

    cout << "Inputkan lama kendaraan terparkir(jam): ";
    cin >> lama;

    total = lama * tarif;

    if (lama > 5){
        total = total + 2000;
    }

    cout << "======================================" << endl;
    cout << "Jenis Kendaraan: " << jenis << endl;
    cout << "Lama Kendaraan Terparkir: " << lama << " jam" << endl;
    cout << "======================================" << endl;
    cout << "Total Tarif Kendaraan adalah: Rp." << total << endl;
    cout << "======================================" << endl;
    
return 0;
    
}
