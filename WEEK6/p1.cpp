#include <iostream> 
using namespace std; 

int main() 
{
	int larik[5] = {10, 20, 30, 40, 50};
	int i;
	cout << "Elemen larik\t\t" << "Nilai elemen larik\n"; 
	for (i = 0; i < 5; i++) 
	{
		cout << "larik[" << i << "]\t\t\t" << larik[i] << "\n"; 
	}
	return 0; 
} 