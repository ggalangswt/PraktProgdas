#include <iostream>
using namespace std;
 
struct Employee {
    string Name;
    int Age;
};
 
int main() {
	int n;
	cout<<"Masukkan banyaknya data : ";
	cin>>n;
    Employee* DynArray;
    DynArray = new (nothrow) Employee[n];
 
	for(int i=0; i<n; i++){
		cout<<"Masukkan data ke "<<i+1<<endl;
		cout<<"Nama : ";
		cin>>DynArray[i].Name;
		cout<<"Umur : ";
		cin>>DynArray[i].Age;
		cout<<endl;
	}
 
    cout << "Displaying the Array Content" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << DynArray[i].Name
<< "\tAge: " << DynArray[i].Age << endl;
    }
 
    delete[] DynArray;
    return 0;
}