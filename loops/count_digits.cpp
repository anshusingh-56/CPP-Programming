#include<iostream>
using namespace std;

int main()
{
    int n,i, count = 0;
    cout<<"Enter a number: ";
    cin>>n;

    if(n == 0)
        count++;
    while(n != 0)
{
    n = n/10;
    count++;
}

cout<<"Number of digits = "<<count;
    return 0;
}