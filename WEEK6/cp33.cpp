#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Please enter row: ";
    cin >> row;
    cout << "Please enter column: ";
    cin >> col;

    int matrix[row][col];

    cout << "Please enter the element of matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    cout << "The Matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int smallest = matrix[0][0];
    int row_f, col_f;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] < smallest)
            {
                smallest = matrix[i][j];
                row_f = i;
                col_f = j;
            }
        }
    }
    cout << endl;

    cout << "The smallest number in matrix is " << smallest << ". ";
    cout << "The index are [row: " << row_f + 1 << " & column: " << col_f + 1 << "]" << endl;
	
    return 0;
}