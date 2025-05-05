#include <iostream> 
using namespace std; 

int main()
{
	int A[5][5], i = 0, j = 0, k = 0, l = 0;
	bool sentinel = true;
	/*for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = i + 100;
		}
	}
	cout << "Indeks\t\t"<< "Nilai Elemen\t"<< "Alamat" << endl;
	for (k = 0; k < 5; k++)
	{
		for (l = 0; l < 5; l++)
		{
			cout << "[" << k << "]"<< "[" << l << "]"<< "\t\t" << A[k][l]<< "\t\t" << &A[k][l]<< endl;
		}
	}*/
	// modifikasi 1 while
	
	while (i < 5)
	{
		while (j < 5)
		{
			A[i][j] = i + 100;
			j++;
			}
			j = 0;
			i++;
		}
		cout << "Indeks\t\t"<< "Nilai Elemen\t"<< "Alamat" << endl;
		while (k < 5)
		{
			while (l < 5)
			{
				cout << "[" << k << "]"<< "[" << l << "]"<< "\t\t" << A[k][l]<< "\t\t" << &A[k][l]<< endl;
				l++;
			}
			l = 0;k++;
		}
		// modifikasi 2 do while
		/*
		do
		{
			while (i < 5)
			{
				while (j < 5)
				{
					A[i][j] = i + 100;
					j++;
				}
				j = 0;
				i++;
			}
			cout << "Indeks\t\t"
			<< "Nilai Elemen\t"
			<< "Alamat" << endl;
			while (k < 5)
			{
				while (l < 5)
			{
				cout << "[" << k << "]"
				<< "[" << l << "]"
				<< "\t\t" << A[k][l]
				<< "\t\t" << &A[k][l]
				<< endl;
				l++;
			}
			l = 0;
			k++;
			}
			if (k == 5)
			{
			sentinel = false;
			}
			} while (sentinel == true);*/
			return 0;
} 