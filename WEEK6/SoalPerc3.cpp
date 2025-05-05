#include <iostream>
using namespace std;

typedef struct Person
{
		string name;
		int NIM;
		int age;
}Student;

int main()
{
	int i,n;
	cout<< "Masukkan jumlah data mahasiswa :";
	cin>> n;
	cout<<endl;
	
	Student s_array[n];
	cout<<"Masukkan Data Mahasiswa \n";
	for(i=0;i<n;i++){
		cout<< "Masukkan Nama mahasiswa :\n";

		cin>>s_array[i].name;
		cout<< "Masukkan NIM mahasiswa :\n";
		cin>>s_array[i].NIM;
		cout<< "Masukkan Umur mahasiswa :\n";
		cin>>s_array[i].age;
	}
	
	cout<<"\nDaftar Mahasiswa\n";
	cout<<"\nNo.\t\tNama\t\tNIM\t\tUmur\n";
	for(i=0;i<n;i++){
	cout<<i+1<<"\t\t"<<s_array[i].name <<"\t\t\t"<<s_array[i].NIM

	<<"\t\t"<<s_array[i].age <<endl;
}
}