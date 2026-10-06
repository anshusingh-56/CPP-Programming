#include<iostream>
using namespace std;

int main()
{
    int n, largest = 0, rem;
    cout<<"Enter a number: ";
    cin>>n;

     while(n > 0)
    {
        rem = n % 10;

        if( rem > largest )
        largest = rem;

        n = n / 10;
    }

    cout<<"Largest digit = "<<largest;
    
    return 0;
}