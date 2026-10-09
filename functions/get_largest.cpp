#include<iostream>
using namespace std;

int getLargest();

int getLargest(){

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(a > b)
        return a;
    else
        return b;
}
int main(){

    int result;

    result = getLargest();

    cout << "Largest = " << result;

    return 0;
}