#include<iostream>
using namespace std;

int main ()
{
    int a, b, c;

    cout<<"Enter three number: ";
    cin>>a>>b>>c;

    if(a > b && a > c)
        cout<<"Largest number is = "<<a;
    else if(b > c && b > a )
        cout<<"Largest number is = "<<b;
    else
        cout<<"Largest number is = "<<c;

    return 0;
}