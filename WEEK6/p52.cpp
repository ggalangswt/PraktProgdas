#include <iostream>
using namespace std;

int main()
{
	int s[6][6];
    int i = 0, j = 0, k = 0, l = 0;
    cout << "Masukkan sks Mahasiswa untuk 3 Angkatan yang berbeda \n";
    while (i < 6)
    {
        cout << "\nAngkatan 199" << i << "\t";
        while (j < 4)
        {
            cout << "\nsks Mahasiswa [" << i << "] [" << j << "] = ";
            cin >> s[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    cout << endl;
    cout << "\nTampilkan data sks Mahasiswa 3 Angkatan\n";
    cout << "\n Angkatan\t\t"
         << "sks";
    while (k < 6)
    {
        cout << "\n 202" << i << "\t";
        while (l < 4)
        {
            cout << "\t" << s[i][j];
            l++;
        }
        l = 0;
        k++;
        cout << endl;
    }
    return 0;
}
