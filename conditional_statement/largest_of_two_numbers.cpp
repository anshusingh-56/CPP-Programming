#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout<<"Enter a number: ";
    cin>>num1>>num2;

    if(num1 > num2)
       cout<<"Largest Number: "<<num1;
    else if(num1 < num2)
        cout<<"Largest Number: "<<num2;
    else
        cout<<"Both values are equal";

    return 0;
}