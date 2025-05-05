#include <iostream>
using namespace std;

int main () 
{
	int A[5], i, j;
	for ( int i = 0; i < 5; i++ ) 
	{
	A[i] = i + 100;
	}
	cout << "Indeks\t\t"
		 << "Nilai Elemen\t" 
		 << "Alamat"<<endl;
	for ( int j = 0; j < 5; j++ ) 
	{
		cout << j <<"\t\t\t"<<A[ j ]<<"\t\t\t\t"<<&A[j] << endl;
	}
	return 0;
}