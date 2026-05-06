#include <iostream>
#include <cmath> // untuk fungsi pow (perpangkatan)
#include <string> // untuk menggunakan tipe data string
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    string angka; // menyimpan input dalam bentuk string
    int jumlah = 0; // variabel untuk menyimpan hasil penjumlahan

    cout << "Masukkan angka: ";
    cin >> angka;

    int banyakDigit = angka.length(); // menghitung jumlah digit

    cout << "Perhitungan: ";

    for (int i = 0; i < banyakDigit; i++) { // loop untuk setiap digit
        int digit = angka[i] - '0'; // mengubah karakter menjadi angka
        jumlah += pow(digit, banyakDigit); // menjumlahkan digit^jumlahDigit

        cout << digit;

        for (int j = 1; j < banyakDigit; j++) {
            cout << "*" << digit; // menampilkan perkalian berulang (misalnya 3*3*3)
        }

        if (i != banyakDigit - 1) cout << " + "; // tambah tanda + kecuali di akhir
    }

    cout << " = " << jumlah << endl; // menampilkan hasil akhir perhitungan

    int asli = stoi(angka); // mengubah string menjadi integer

    if (jumlah == asli) {
        cout << "YES, " << asli << " is an Armstrong Number";
    } else {
        cout << "NO, " << asli << " is not an Armstrong Number";
    }
}