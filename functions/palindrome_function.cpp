#include<iostream>
using namespace std;

int palindrome(int n);

int palindrome(int n){

    int rev = 0, rem, temp = n;

    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return temp == rev; 
}

int main(){
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if(palindrome(n))
        cout << "Palindromne";
    else
        cout << "Not Palindrome";

    return 0;
}