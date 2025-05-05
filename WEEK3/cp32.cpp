#include <iostream> 
using namespace std; 
int main ()  { 
	int n, x, y, num = 1;
	cout << "Input the number of row: ";
	cin >> n;
	x = 1;
	y = 1;
	for(x; x <= n; x++){
		for(y; y <= n; y++){
			cout << num << " ";
			num ++;
		}
		cout << '\n';
	}
	return 0; 
} 