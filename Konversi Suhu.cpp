#include <iostream>
#include <windows.h>
using namespace std;

void menu_konversi();
void ulangi_konversi();
void keluar_konversi();

void keluar_program(){
    system("cls");
    cout << "========================================" << endl;
    cout << "|:: Terima Kasih Atas Percobaan Anda ::|" << endl;
    cout << "========================================" << endl;
};

void ulangi_konversi(){
    char pilih;
    cout << endl;
    cout << "Inputkan [Y] Untuk Kembali Ke Menu Konversi" << endl;
    cout << "Inputkan [N] Untuk Keluar Dari Program" << endl;
    cout << "[Y/N] ...? :";
    cin >> pilih;
    if(pilih == 'Y' || pilih == 'y')
    { menu_konversi(); }
    else if(pilih == 'N' || pilih == 'n')
    { keluar_program(); }
    else 
    {
        system("cls");
        cout << "Silahkan Ulangi! Terima Kasih." << endl;
    }
}

void menu_konversi(){
        // Keterangan Program
    cout << "|==============================|" << endl;
    cout << "|  KONVERSI SUHU DARI CELCIUS  |" << endl;
    cout << "| Fahrenheit : Reamur : Kelvin |" << endl;
    cout << "|==============================|" << endl;

    // Inputan dari Keyboard
    int cel;
    cout << "Masukkan Suhu Dalam Celcius : ";
    cin >> cel;

     // Hasil Konversi
    float fah, rea, kel;
    fah = ((cel * 9.0 / 5.0) + 32.0);
    rea = cel * 4.0 / 5.0;
    kel = cel + 273.0;
    cout << "|========================================|" << endl;
    cout << "|              HASIL KONVERSI            |" << endl;
    cout << "|========================================|" << endl;
    cout << "| Celcius    = " << cel << " Derajat Celcius \t |" << endl;
    cout << "| Fahrenheit = " << fah << " Derajat Fahrenheit \t |" << endl;
    cout << "| Reamur     = " << rea << " Derajat Reamur \t |" << endl;
    cout << "| Kelvin     = " << kel << " Derajat Kelvin \t |" << endl;
    cout << "|========================================|" << endl;

    ulangi_konversi();
};

void keluar_konversi(){
    system("cls");
    cout << "========================================" << endl;
    cout << "|:: Terima Kasih Atas Percobaan Anda ::|" << endl;
    cout << "========================================" << endl;
};

int main(){
    menu_konversi();
}