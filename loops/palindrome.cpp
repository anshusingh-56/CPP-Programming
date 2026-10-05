#include<iostream>
using namespace std;

int main()
{
    int n,i, reverse = 0, rem, original;
    cout<<"Enter a number: ";
    cin>>n;

    original = n;

    while( n != 0 )
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if( original == reverse )
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}