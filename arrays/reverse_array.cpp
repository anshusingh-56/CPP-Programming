#include<iostream>
using namespace std;

int main(){

    int a[5];

    cout << "Enter five numbers: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Reverse array: ";

    for(int i = 4; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}