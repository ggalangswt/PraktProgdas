#include <iostream>
using namespace std;
int main()
{
	int index;
	cout << "Masukkan jumlah isi array: ";
	cin >> index;
	
	int myarray[index];
	for (int i = 0; i < index; i++)
	{
		cout << "Masukkan isi array ke-" << i + 1 << ": ";
		cin >> myarray[i];
	}
	
	cout << "\nInput list is\n";
	for (int i = 0; i < index; i++)
		{
			cout << myarray[i] << "\t";
		}
		
	for (int k = 1; k < index; k++)
	{
		int temp = myarray[k];
		int j = k - 1;
		while (j >= 0 && temp <= myarray[j])
		{
			myarray[j + 1] = myarray[j];
			j = j - 1;
		}
		myarray[j + 1] = temp;
	}
		cout << "\nOutput list is \n";
		for (int i = 0; i < index; i++)
	{
		cout << myarray[i] << "\t";
	}
	return 0;
}