#include <iostream>

using namespace std;
double add_array(double[]);
double avg(double, int);

int main()
{
    double arr[3];
    double sum, average;


    for (int i = 0; i < 3; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    sum = add_array(arr);

    average = avg(sum, 3);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

double add(double num1, double num2, double num3)
{
    return num1 + num2 + num3;
}

double avg(double sum, int n)
{
    return (sum / n);
}
double add_array(double arr[])
{
    double result = 0;


    for (int i = 0; i < 3; i++)
    {
        result += arr[i];
    }


    return result;
}