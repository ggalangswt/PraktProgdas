#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char angka[8];
    int a;
    cout << "Masukan karakter angka = " << endl;
    cin.get (angka,8);
    a = atoi(angka);
    cout << "Angka dalam tipe character = " << angka << endl;
    cout << "Angka dalam tipe integer = " << a << endl;

    return 0;
}