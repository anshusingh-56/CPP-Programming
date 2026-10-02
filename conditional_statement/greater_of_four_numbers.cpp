#include<iostream>
using namespace std;

int main ()
{
    int a, b, c, d;
    
    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";
    cin>>b;

    cout<<"Enter value of c: ";
    cin>>c;

    cout<<"Enter value of d: ";
    cin>>d;

    if ( a > b && a > c && a > d )
        cout<<"a is greater";
    else if ( b > a && b > c && b > d )
        cout<<"b is greater";
    else if ( c > a && c > b && c > d )
        cout<<"c is greater";
    else
        cout<<"d is greater";

    return 0;
}