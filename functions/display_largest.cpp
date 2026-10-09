#include<iostream>
using namespace std;

void largest(int a, int b);

void largest(int a, int b){

    if(a > b){
        cout << "Largest number = " << a;
    }
    else if(b > a){
        cout << "Largest number = " << b;
    }
    else{
        cout << "Both are equal = ";
    }
}
int main(){

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    largest(a, b);

    return 0;
}