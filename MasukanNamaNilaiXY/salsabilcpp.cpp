#include <iostream>
using namespace std;

void tampilkanJudul();
void sapa(string nama);
void tukarNilai(int &a, int &b);
void hitungPersegiPanjang(double panjang, double lebar);

int main() {
    
    tampilkanJudul();

    string nama;
    cout << "Masukkan nama Anda: ";
    cin >> nama;
    sapa(nama);

    int x, y;
    cout << "\nMasukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    cout << "\nSebelum ditukar : x = " << x << ", y = " << y << endl;
    tukarNilai(x, y);
    cout << "Setelah ditukar : x = " << x << ", y = " << y << endl;

        double panjang, lebar;
    cout << "\nMasukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang  : ";
    cin >> lebar;
    hitungPersegiPanjang(panjang, lebar);

    return 0;
}


void tampilkanJudul() {
    cout << "===============================================" << endl;
    cout << "        PRAKTIKUM IMPLEMENTASI PROSEDURE        " << endl;
    cout << "===============================================" << endl;
}


void sapa(string nama) {
    cout << "\nHalo, " << nama << "! Selamat belajar prosedur di C++." << endl;
}

void tukarNilai(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void hitungPersegiPanjang(double panjang, double lebar) {
    double luas = panjang * lebar;
    double keliling = 2 * (panjang + lebar);

    cout << "\n----- HASIL PERHITUNGAN -----" << endl;
    cout << "Panjang  : " << panjang << endl;
    cout << "Lebar    : " << lebar << endl;
    cout << "Luas     : " << luas << endl;
    cout << "Keliling : " << keliling << endl;
}