#include <iostream>
using namespace std;

int main(){
    string pesan;

    cout << "Masukkan pesan: ";
    cin >> pesan;

    cout << "Hasil sandi: ";

    cout << pesan[0];

    for(int i = 1; i < pesan.length(); i++){
        int sekarang = pesan[i] - 'A' + 1;
        int sebelumnya = pesan[i - 1] - 'A' + 1;
        int hasil = sekarang + sebelumnya;

        if(hasil > 26){
            hasil = hasil - 26;
        }
        char huruf = 'A' + hasil - 1;

        cout << huruf;
    }
    cout << endl;

    return 0;
}