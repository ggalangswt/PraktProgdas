#include <iostream> 
using namespace std; 
int main ()  { 
	int n, digit, num, rev = 0;
	cout << "Input number: ";
	cin >> num;
	n = num;
	while (num != 0){
		digit = num%10;
		rev = rev*10 + digit;
		num = num/10;
	}
	cout << rev << endl;
	if (rev == n){
		cout << "Palindrome";
	} else {
		cout << "Non-paalindrome";
	}
	return 0; 
} 