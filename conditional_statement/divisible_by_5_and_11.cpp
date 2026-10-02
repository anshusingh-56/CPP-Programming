#include<iostream>
using namespace std;

int main ()
{
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    if( num % 5 == 0 && num % 7 == 0)
        cout<<"Number is divisible by both 5 and 7";
    else if( num % 5 == 0 && num % 7 != 0)
        cout<<"Number id divisible by 5 but not 7";
    else if( num % 5 != 0 && num % 7 == 0)
        cout<<"Number id divisible by 7 but not 5";
    else
        cout<<"Number is not divisible by both 5 and 7";

    return 0;
}