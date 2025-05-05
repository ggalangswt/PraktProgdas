#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 69;
    int b = 4;
    int c = 2;
    int d = 0;
    float pangkat, akar, vsin, vcos, vtan;
    akar = sqrt (a);
    cout << "Akar dari " << a << " adalah " << akar << endl;
    pangkat = pow(b,c);
    cout << b << " pangkat " << c << " adalah " << pangkat << endl;
    vsin = sin(d);
    cout << "sin sudut " << d << " derajat adalah " << vsin << endl;
    vcos = cos(d);
    cout << "cos sudut " << d << " derajat adalah " << vcos << endl;
    vtan = tan(d);
    cout << "tan sudut " << d << " derajat adalah " << vtan << endl;
    
    return 0;
}