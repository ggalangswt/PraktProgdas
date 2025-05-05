#include <iostream>
#include <string>
using namespace std;
	
struct
	{
		int roll, age;
		string name;
	} vr[2];
	
int main()
{
	int i, j, k, max;
	string temp;
	for (int i = 0; i < 2; i++)
	{
		cout << "\nEnter " << i + 1 << " Student Record\n";
		cout << "Enter Roll no: ";
		cin >> vr[i].roll;
		cin.ignore(256, '\n');
		cout << "Enter age: ";
		cin >> vr[i].age;
		cin.ignore(256, '\n');
		cout << "Enter name: ";
		getline(cin, vr[i].name);
	}
		cout << endl;
		for (j = 0; j < 2; j++)
		{
			cout << "\nDisplay" << j + 1 << " Student Record";
			cout << "\n Roll no. : " << vr[j].roll;
			cout << "\nAge : " << vr[j].age;
			cout << "\nName : " << vr[j].name << endl;
		}
		max = vr[0].age;
		int flag;
		for (k = 0; k < 2; k++)
		{
		if (max < vr[k].age)
			{
				max = vr[k].age;
				flag = k;
			}
		}
		cout << "\nThe oldest age's student is " << vr[flag].name << " " <<
		max << " years old";

return 0;
}