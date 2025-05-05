#include <iostream>
using namespace std;

float area (float);
int main(){
    float radius, y;
    cin >> radius;
    y = area (radius);
    cout << "The area of the circle is " << y;
}

float area (float r){
    return (3.1416 * r * r);
}