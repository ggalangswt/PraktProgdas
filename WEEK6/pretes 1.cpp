#include <iostream>
using namespace std;

int main() {
    int ukuran;
    cout << "Masukkan jumlah elemen: ";
    cin >> ukuran;

    int* angka = new int[ukuran];

    for (int i = 0; i < ukuran; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> angka[i];
    }

    cout << "Isi array dinamis:" << endl;
    for (int i = 0; i < ukuran; i++) {
        cout << angka[i] << " ";
    }

    delete[] angka;
    return 0;
}
