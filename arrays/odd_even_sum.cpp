#include<iostream>
using namespace std;

int main(){

    int i, a[10], sum_even = 0, sum_odd = 0;

    cout << "Enter ten number: ";

    for(i = 0; i < 10; i++ )
    {
        cin >> a[i];

        if(a[i] % 2 == 0)
        {
            sum_even += a[i];
        }
        else{
            sum_odd += a[i];
        }
    }

    cout << "Sum of even number: " << sum_even << endl;
    cout << "Sum of odd number: " << sum_odd << endl;

    return 0;
}