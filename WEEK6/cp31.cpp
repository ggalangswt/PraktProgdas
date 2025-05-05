#include <iostream>
using namespace std;

int insert_array(int[], int);
int accessing_array(int[], int);
int search_array(int[], int, int);
int main()
{
    int n, k, l, ia, aar, sar, ans = -1;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    ia = insert_array(arr, n);
    cout << "Accessing element at index. Enter the index: ";
    cin >> l;
    aar = accessing_array(arr, l);
    cout << "\nElement present at index " << l << " is " << aar << endl;
    cout << "Enter element to be searched: ";
    cin >> k;
    ans = search_array(arr, n, k);
    if (ans != -1)
    {
        cout << "The element " << k << " is present at index " << ans;
    }
    else
    {
        cout << "The element " << k << " is not in the array";
    }
    return 0;
}
int insert_array(int arr[], int n)
{
    cout << "Enter elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return *arr;
}
int accessing_array(int arr[], int l)
{
    return arr[l];
}
int search_array(int arr[], int n, int k)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            ans = i;
            break;
        }
    }
    return ans;
}