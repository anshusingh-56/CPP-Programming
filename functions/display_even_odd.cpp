#include<iostream>
using namespace std;

void check(int n);

void check(int n){

    if(n % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
}
int main(){

    int n;

    cout << "Enter your number: ";
    cin >> n;

    check(n);

    return 0;
}