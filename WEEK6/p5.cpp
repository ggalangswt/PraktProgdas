#include<iostream>
using namespace std;
int main( )
{
int s[6][6];
int i, j;
cout<<"\nMasukkan sks Mahasiswa untuk 6 Angkatan yang berbeda \n";
for(i=0;i<6;i++)
{
cout<<"\n Angkatan 199"<<i<<"\t";
for(j=0;j<4;j++)
{
cout<<"\nsks Mahasiswa ["<<i<<"]["<<j<<"]= ";
cin>>s[i][j];
}
}
cout<<endl;
cout<<"\nTampilkan data sks Mahasiswa 6 Angkatan\n";
cout<<"\n Angkatan\t\t"<<"sks";
for(i=0;i<6;i++)
{
cout<<"\n 199"<<i<<"\t";
for(j=0;j<4;j++)
{
cout<<"\t"<<s[i][j];
}
cout<<endl;
}
}