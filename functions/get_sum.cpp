#include<iostream>
using namespace std;

int getSum();

int getSum(){

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    return a + b;
}
int main(){

    int result;

    result = getSum();

    cout << "Sum = " << result;

    return 0;
}