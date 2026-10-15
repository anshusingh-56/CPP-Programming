#include<iostream>
using namespace std;

int main(){

    int i, a[5], b[5];

    cout << "Enter five numbers: "<< endl;

    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < 5; i++)
    {
        b[i] = a[i];
    } 

    cout << "Copied array" << endl;

    for(i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}