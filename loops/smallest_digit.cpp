#include<iostream>
using namespace std;

int main()
{
    int n, smallest = 9, rem;
    cout<<"Enter a number: ";
    cin>>n;

     while(n > 0)
    {
        rem = n % 10;

        if( rem < smallest )
        smallest = rem;

        n = n / 10;
    }

    cout<<"Smallest digit = "<<smallest;
    
    return 0;
}