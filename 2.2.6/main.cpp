#include <iostream>
#include <cstdio>
using namespace std;
long long n,m,wynik;

int main()
{
    cout<<"Wypisz dwie liczby:"<<endl;
    cin>>n>>m;
    wynik=1;
    for(int i=1;i<=m;i++)
    wynik*=n;

    cout<<wynik<<endl;

    cin.ignore(2);
    return 0;
}
