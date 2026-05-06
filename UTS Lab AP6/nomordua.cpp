#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int n; // variabel untuk menyimpan input angka ke-n
    cout << "Masukkan angka: "; // menampilkan pesan
    cin >> n; // menerima input dari user

    int a = 0, b = 1, hasil; // a dan b adalah dua suku awal Fibonacci (0 dan 1), hasil untuk menyimpan nilai sementara

    if (n == 0) {
        hasil = 0;
    } else if (n == 1) {
        hasil = 1;
    } else {
        for (int i = 2; i <= n; i++) { // perulangan dari suku ke-2 sampai ke-n
            hasil = a + b; // menjumlahkan dua suku sebelumnya
            a = b; // geser nilai a menjadi b
            b = hasil; // geser nilai b menjadi hasil terbaru
        }
    }

    cout << "Output: " << hasil; // menampilkan hasil suku ke-n Fibonacci
}