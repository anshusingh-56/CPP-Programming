#include<iostream>
using namespace std;

int main()
{
    int n,i, reverse = 0, rem;
    cout<<"Enter a number: ";
    cin>>n;


    while( n != 0 )
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    cout<<"Reverse = "<<reverse;

    return 0;
}