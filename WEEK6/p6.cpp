#include <iostream>
using namespace std;

struct rectangular
{
	int length;
	int width;
};

int main()
{
	rectangular *ptr, r;
	int area;
	ptr = &r;
	cout << "Enter length: " << endl;
	cin >> (*ptr).length;
	cout << "Enter width: " << endl;
	cin >> (*ptr).width;
	area = (*ptr).length * (*ptr).width;
	cout << "Displaying information rectangular " << endl;
	cout << "Length = " << (*ptr).length << "\tWidth = " << (*ptr).width;
	cout << "\nArea = " << area << endl;
	return 0;
} 