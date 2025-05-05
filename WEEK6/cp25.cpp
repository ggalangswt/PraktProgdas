#include <iostream>
using namespace std;
int main()
{
    char arr1[5][5];
    char arr2[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                arr1[i][j] = 'x';
            }
            else
            {
                arr1[i][j] = '*';
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= j)
            {
                arr2[i][j] = 'x';
            }
            else
            {
                arr2[i][j] = '*';
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}