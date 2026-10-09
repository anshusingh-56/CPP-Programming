#include<iostream>
using namespace std;

int getNumber();

int getNumber(){

    int n;

    cout << "Enter your number: ";
    cin >> n;
    
    return n;
}
int main(){

    int n;

    n = getNumber();

    cout << "Number: " << n;

    return 0;
}