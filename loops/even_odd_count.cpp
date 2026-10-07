#include<iostream>
using namespace std;

int main()
{
    int n, largest = 0, rem, even = 0, odd = 0;
    cout<<"Enter a number: ";
    cin>>n;

     while(n > 0)
    {
        if( n % 2 == 0 )
            even++;
        else
            odd++;

        n = n / 10;
    }

    cout<<"Even digit = "<<even<<endl;
    cout<<"Odd digit = "<<odd;
    
    return 0;
}