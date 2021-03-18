#include<iostream>
using namespace std;

int reku(int n)
{

    if(n < 2)
        return 1;
    else
        return n-1 + reku(n-1);
}

int main()
{
    int n;
    cout<<"Liczba:"<< endl;
    cin>>n;
    cout<<"a"<<n<<" = "<<reku(n);
    return 0;
}
