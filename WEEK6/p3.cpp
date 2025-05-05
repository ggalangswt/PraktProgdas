#include <iostream>
#include <string>
using namespace std;

typedef struct Person
{
	string name, NIM;
	int age;
} Student;

int main()
{
	int i,n;
	string nama;
	
	cout << "Masukkan jumlah data mahasiswa: ";
	cin >> n;
	cout << endl;
	cin.ignore (256, '\n');

	Student s_array[n];
	cout << "Masukkan Data Mahasiswa\n"; 
	for (i = 0; i < n; i++)
	{
		cout << "\nMasukkan Nama mahasiswa: ";
		getline(cin, nama);
		s_array[i].name = nama.substr(0, 49); 
		cout << "Masukkan NIM mahasiswa: ";
		cin>> s_array[i].NIM;
		cout << "Masukkan Umur mahasiswa: ";
		cin.ignore (256, '\n');
		cin>> s_array[i].age;
		cin.ignore (256, '\n');
	}
	
		cout << "\nDaftar Mahasiswa\n";
		cout<<"\nNo.\t\tNama\t\tNIM\t\tUmur\n"; 
		for (i=0; i < n; i++)
	{
		cout << i + 1 << s_array[i].name << "\t" << s_array[i].NIM << "\t\t" << s_array[i].age << endl;
	}
	
	return 0;
}