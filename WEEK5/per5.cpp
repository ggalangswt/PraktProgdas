#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Happy Year";
    string str2 = "New ";
    string str3, str4, str5, str6, str7;

    str3 = str1.insert(6, str2 );
    cout << "str3 : " << str3 << endl;

    str4 = str1.replace(6, 3, str2, 0, 3 );
    cout << "str4 : " << str4 << endl;

    str5 = str3.substr(6, 4);
    cout << "str5 : " << str5 << endl;

    str6 = str3.substr(0, 5);
    cout << "str6 : " << str6 << endl;

    cout << str3.find("New") << endl;
    cout << str3.find("ar") << endl;
    cout << str3.find("ro") << endl;

    str7 = str3.erase(6);
    cout << "str7 : " << str7 << endl;
    str7 = str1.replace(6, 3, str2, 1, 2 );
    cout << "str7 : " << str7 << endl;

    return 0;
}