#include <iostream>
using namespace std;
int insert_array(int[], int);
int sorting(int[]);

int main()
{
    int myarray[5];
    insert_array(myarray, 5);


    cout << "\nInput list is \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << "\t";
    }

    sorting(myarray);
    cout << "\nOutput list is \n";
    for (int i = 0; i < 5; i++)
    {
        cout << myarray[i] << "\t";
    }
    return 0;
}

int insert_array(int myarray[], int size)
{
    cout << "Masukkan nilai array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarray[i];
    }


    return *myarray;
}

int sorting(int myarray[])
{
    for (int k = 1; k < 5; k++)
    {
        int temp = myarray[k];
        int j = k - 1;
        while (j >= 0 && temp <= myarray[j])
        {
            myarray[j + 1] = myarray[j];
            j = j - 1;
        }
        myarray[j + 1] = temp;
    }

    return *myarray;
}