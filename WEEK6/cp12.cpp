#include <iostream>
using namespace std;

const int Size = 2;
struct employee
{
	string name;
	int emp_no;
	int salary;
};

int main()
{
	employee emp[Size];
	for (int i = 0; i < Size; i++)
	{
		cout << "\nPegawai Nomor " << i + 1 << endl;
		
		cout << "Nama: ";
		getline(cin, emp[i].name);

		cout << "Kode: ";
		cin >> emp[i].emp_no; 
		cin.ignore (256, '\n');
	
		cout << "Gaji: ";
		cin >> emp[i].salary; 
		cin.ignore (256, '\n');
	}

	cout << "\n";
	cout << "Data Pegawai\n";
	cout << "No. \tNama\tkode\t\tGaji\n";
	for (int i = 0; i < Size; i++)
	
	{
	cout << i + 1
         << "\t" << emp[i].name
         <<"\t" << emp[i].emp_no 
		 << "\t\t" << emp[i].salary
         << "\n";
	}
		
	return 0;
}