#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 69;
    int b = 4;
    int c = 2;
    int d = 0;
    int e = -4;
    float hasil1, hasil2, hasil3, hasil4;
    hasil1 = sqrt(a)/d;
    cout << "Hasil dari sqrt (a) / d adalah " << hasil1 << endl;
    hasil2 = sqrt (e);
    cout << "Hasil dari sqrt (e) adalah " << hasil2 << endl;
    hasil3 = min(b,c);
    cout << "Hasil dari min (b,c) adalah " << hasil3 << endl;
    hasil4 = abs (e);
    cout << "Hasil dari abs (e) adalah " << hasil4 << endl;

    return 0;
}