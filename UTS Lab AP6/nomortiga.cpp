#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int angka[5]; // array untuk menyimpan 5 angka

    cout << "Masukkan 5 angka: ";

    for (int i = 0; i < 5; i++) { // perulangan dari indeks 0 sampai 4
        cin >> angka[i]; // menyimpan input ke dalam array
    }

    cout << "Output: ";

    for (int i = 4; i >= 0; i--) { // perulangan dari indeks terakhir ke awal
        cout << angka[i] << " "; // menampilkan angka secara terbalik
    }
}