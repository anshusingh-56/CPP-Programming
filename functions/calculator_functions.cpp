#include<iostream>
using namespace std;

int add( int a, int b);
int sub( int a, int b);
int mul( int a, int b);
int divide( int a, int b);

int add( int a, int b)
{
    return a + b;
}
int sub( int a, int b)
{
    return a - b;
}
int mul( int a, int b)
{
    return a * b;
}
int divide( int a, int b)
{
    return a / b;
}

int main(){

    int a, b;
    char op;

    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<"Enter opterator ( +, -, *, /): ";
    cin>>op;

    switch (op){
        case '+':
        cout<<"Addition = "<<add(a, b);
        break;

        case '-':
        cout<<"Subtraction = "<<sub(a, b);
        break;

        case '*':
        cout<<"Multiply = "<<mul(a, b);
        break;

        case '/':
        if( b != 0){
            cout<<"Divide = "<<divide(a, b);
        }
        else
        {
            cout<<"Division not possible";
        }

        default:
        cout<<"Invalid operator";
    }

    return 0;
}