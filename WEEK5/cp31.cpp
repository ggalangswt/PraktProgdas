#include <iostream>
#include <string>
using namespace std;

int main(){
    string nim, angkatan, niu, fakultas, nif;
    cout << "Masukkan NIM: ";
    getline(cin, nim);
	
    angkatan = nim.substr(0, 2);
    niu = nim.substr(3, 6);
    fakultas = nim.substr(10, 2);
    nif = nim.substr(13, 5);

    cout << "Angkatan: " << angkatan << endl;
    cout << "NIU: " << niu << endl;
    cout << "Kode Fakultas: " << fakultas << endl;
    cout << "NIF: " << nif << endl;

    return 0;
}