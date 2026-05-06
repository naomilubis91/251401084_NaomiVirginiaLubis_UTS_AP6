#include <iostream>
#include <cstdlib>
using namespace std;

int fpb(int a, int b) { // fungsi untuk mencari FPB dari dua bilangan
    while (b != 0) { // perulangan selama b tidak sama dengan 0
        int sisa = a % b; // mencari sisa pembagian a dengan b
        a = b; // nilai a diganti dengan b
        b = sisa; // nilai b diganti dengan sisa
    }
    return a; // mengembalikan hasil FPB (nilai a saat b = 0)
}

int main() {
    system("cls");
    int angka1, angka2; // deklarasi dua variabel untuk input

    cout << "Masukkan dua angka: "; // menampilkan pesan ke user
    cin >> angka1 >> angka2; // menerima input dua angka

    cout << "FPB: " << fpb(angka1, angka2); // memanggil fungsi fpb dan menampilkan hasilnya
}