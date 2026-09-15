#include <iostream>
using namespace std;

int main() {
    string pesan;

    cout << "Masukkan pesan: ";
    cin >> pesan;

    cout << "Hasil sandi: ";

    // Huruf pertama tetap
    cout << pesan[0];

    for (int i = 1; i < pesan.length(); i++) {

        // Nilai huruf sekarang
        int sekarang = pesan[i] - 'A' + 1;

        // Nilai huruf sebelumnya
        int sebelumnya = pesan[i - 1] - 'A' + 1;

        // Jumlahkan
        int hasil = sekarang + sebelumnya;

        // Kalau lebih dari 26, kembali dari A
        if (hasil > 26) {
            hasil = hasil - 26;
        }

        // Ubah angka kembali menjadi huruf
        char huruf = 'A' + hasil - 1;

        cout << huruf;
    }

    cout << endl;

    return 0;
}