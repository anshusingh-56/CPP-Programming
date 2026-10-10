#include<iostream>
using namespace std;

int reverse( int n);

int reverse( int n){

    int rem, rev = 0;

    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Reverse = "<< reverse(n);

    return 0;
}