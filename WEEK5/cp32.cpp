#include <iostream>
#include <string>
#include <vector>
using namespace std;

void input_data();
float calculate_gpa(float[], float[], int);
void print_data(string, int, vector<string>, float[], float[], float);

int main(){
    input_data();
    return 0;
}

void input_data(){
    string nim, matkul;
    int jumlah_matkul;
    float sks, nilai;

    for (int i = 0; i < 5; i++){
        cout << "Masukkan NIM Anda: ";
        cin >> nim;

        cout << "Masukkan Jumlah Mata Kuliah Semester ini: ";
        cin >> jumlah_matkul;
        cout << "\n";
        cin.ignore(256, '\n');

        vector<string> mata_kuliah;
        float nilai_matkul[jumlah_matkul], sks_matkul[jumlah_matkul];

        for (int i = 0; i < jumlah_matkul; i++){
            cout << "Masukkan Nama Mata Kuliah ke-" << (i + 1) << ": ";
            getline(cin, matkul);
            mata_kuliah.push_back(matkul.substr(0, 49));

            cout << "Masukkan SKS Mata Kuliah ke-" << (i + 1) << ": ";
            cin >> sks;
            cin.ignore(256, '\n');
            sks_matkul[i] = sks;

            cout << "Masukkan Nilai Mata Kuliah ke-" << (i + 1) << ": ";
            cin >> nilai;
            cout << "\n\n";
            cin.ignore(256, '\n');
            nilai_matkul[i] = nilai;

            matkul = "";
            nilai = 0;
            sks = 0;
        }
        float result = calculate_gpa(sks_matkul, nilai_matkul, jumlah_matkul);
        print_data(nim, jumlah_matkul, mata_kuliah, nilai_matkul, sks_matkul, result);
    }
}

float calculate_gpa(float sks[], float nilai[], int jumlah_matkul){
    float sks_total = 0, nilai_total = 0, gpa, temp;
    for (int i = 0; i < jumlah_matkul; i++){
        temp = nilai[i] * sks[i];
        sks_total += sks[i];
        nilai_total += temp;
        temp = 0;
    }
    gpa = nilai_total / sks_total;
    return gpa;
}

void print_data(string nim, int jumlah_matkul, vector<string> mata_kuliah, float nilai_matkul[], float sks_matkul[], float gpa){
    cout << "------------------------" << endl;
    cout << "NILAI AKHIR MAHASISWA" << endl;
    cout << "NIM: " << nim << endl;
    cout << "Jumlah Mata Kuliah: " << jumlah_matkul << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < jumlah_matkul; i++){
        cout << "Nama Mata Kuliah: " << mata_kuliah[i] << endl;
        cout << "Jumlah SKS: " << sks_matkul[i] << endl;
        cout << "Nilai: " << nilai_matkul[i] << endl;
        cout << "------------------------" << endl;
    }
    cout << "IPK: " << gpa << endl;
    cout << "------------------------" << endl;
}