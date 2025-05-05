#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kode_negara, kode_kota, no_telp, no_lengkap;
    cout << "Masukkan kode negara: ";
    cin >> kode_negara;
    cout << "Masukkan kode kota: ";
    cin >> kode_kota;
    cout << "Masukkan nomor telepon: ";
    cin >> no_telp;
    no_lengkap = kode_negara + kode_kota + no_telp;
    cout << "Nomor telepon lengkap: " << no_lengkap << endl;
    string no_tanpa_kode = no_lengkap;
    no_tanpa_kode.erase(0, kode_negara.length() + kode_kota.length());

    cout << "Nomor telepon tanpa kode negara dan kota: " << no_tanpa_kode << endl;

    return 0;
}
