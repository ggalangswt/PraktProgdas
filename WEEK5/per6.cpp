#include <iostream>
using namespace std;

void add_print(int, int); //function declaration

int main() //main program
{
    int a = 4;
    int b = 5;
    
    cout << "Fungsi untuk mencetak hasil penambahan dua bilangan" << endl;
    add_print(a,b); //function call

    return 0;
}

//function definition
void add_print(int val1, int val2){
    int c;
    cout << "Dua Bilangan yang akana dijumlahkan adalah : " << val1 <<" dan " << val2 << endl;
    c = val1+val2;
    cout << "Hasil penjumlahannya adalah : " << c << endl;
}