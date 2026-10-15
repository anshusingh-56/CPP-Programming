#include<iostream>
using namespace std;

int main()
{
    int a[5], smallest, i;

    cout << "Enter 5 numbers: ";

    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    smallest = a[0];

    for(i = 0; i < 5; i++)
    {
        if(a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    cout << "Smallest number: " << smallest;

    return 0;
}