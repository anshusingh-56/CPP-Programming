#include<iostream>
using namespace std;

int add(int a, int b);  // function declaration

int add(int a, int b)   // function definition
{
    return a + b;       // actual sum 
}

int main(){
    int a, b;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Sum = "<<add(a, b);
    return 0;
}
