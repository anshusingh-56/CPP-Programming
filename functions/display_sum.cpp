#include<iostream>
using namespace std;

void add(int a, int b);

void add(int a, int b){

    cout << "Sum = " << a + b;
}

int main(){

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    add(a, b);

    return 0;
}