#include <iostream>
#include <string>
#define pi 3.14
using namespace std;

float input();
void calculate(float);
void result(float[], float);
int main(){
    float a = input();
    calculate(a);
    return 0;
}
float input(){
    float d;
    cout << "Diameter bola: ";
    cin >> d;
    return d;
}
void calculate(float d){
	float r = d / 2;
    float area, volume;
    float res[2];
    area = 4 * pi * r * r;
    volume = (4 * pi * r * r * r) / 3;
    res[0] = area;
    res[1] = volume;
    result(res, d);
}
void result(float arr[], float d){
    cout << "Nilai dari luas permukaan bola dengan diameter " << d << " adalah " << arr[0] << endl;
    cout << "Nilai dari volume bola dengan diameter " << d << " adalah " << arr[1] << endl;
}
