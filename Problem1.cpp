#include <iostream>
using namespace std;

int main(){
    int N, K;

    cout << "Jumlah astronaut: ";
    cin >> N;

    cout << "Nilai K: ";
    cin >> K;
    cout << endl;

    int astronaut[100];
    for (int i = 0; i < N; i++) {
        astronaut[i] = i + 1;
    }

    int jumlah = N;
    int posisi = 0;

    cout << "Urutan eliminasi: ";

    while(jumlah > 1){
        posisi = (posisi + K - 1) % jumlah;

        int tereliminasi = astronaut[posisi];

        cout << tereliminasi << " ";

        for(int i = posisi; i < jumlah - 1; i++){
            astronaut[i] = astronaut[i + 1];
        }

        jumlah--;

        if(tereliminasi % 2 == 0){
            K = K + 2;
        }else{
            K = K - 1;
        }

        if(K < 2){
            K = 2;
        }

        if(posisi >= jumlah){
            posisi = 0;
        }
    }
    cout << "\nAstronaut terakhir: " << astronaut[0] << endl;

    return 0;
}