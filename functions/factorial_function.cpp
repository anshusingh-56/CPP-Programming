#include<iostream>
using namespace std;

int factorial( int n);

int factorial( int n){

    int i, fact = 1;

for(i = 1; i <= n; i++){

    fact = fact * i;
}
return fact;
}
int main (){

    int n, fact;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}