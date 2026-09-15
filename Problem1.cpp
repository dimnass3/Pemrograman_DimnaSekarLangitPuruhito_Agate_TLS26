#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;

    cout << "Jumlah astronaut: ";
    cin >> N;

    cout << "Nilai K: ";
    cin >> K;

    vector<int> astronaut;

    for (int i = 1; i <= N; i++) {
        astronaut.push_back(i);
    }

    int posisi = 0;

    cout << "\nUrutan eliminasi: ";

    while (astronaut.size() > 1) {

        posisi = (posisi + K - 1) % astronaut.size();

        int tereliminasi = astronaut[posisi];

        cout << tereliminasi << " ";

        astronaut.erase(astronaut.begin() + posisi);

        if (tereliminasi % 2 == 0) {
            K = K + 2;
        }
        else {
            K = K - 1;
        }

        if (K < 2) {
            K = 2;
        }

        if (posisi >= astronaut.size()) {
            posisi = 0;
        }
    }

    cout << "\nAstronaut terakhir: " << astronaut[0] << endl;

    return 0;
}