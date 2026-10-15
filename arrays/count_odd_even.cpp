#include<iostream>
using namespace std;

int main(){

    int i, a[5], even = 0, odd = 0;

    cout << "Enter five number: ";

    for(i = 0; i < 5; i++ )
    {
        cin >> a[i];

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Even number: " << even << endl;
    cout << "Odd number: " << odd << endl;

    return 0;
}