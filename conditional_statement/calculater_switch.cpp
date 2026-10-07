// Perform addition, subtraction, multiplication, division and modulas operator
#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    char opr;

    cout<<"Enter operator (+, -, *, /, %): ";
    cin>>opr;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    switch (opr) {
        case '+':
            cout<<"Result = "<<num1 + num2;
            break;
        case '-':
            cout<<"Result = "<<num1 - num2;
            break;
        case '*':
            cout<<"Result = "<<num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout<<"Result = "<<num1 / num2;
            else
            cout<<"Zero divisor not allowed";
            break;
        case '%':
            if (num2 != 0)
                cout<<"Result = "<<num1 % num2;
            else
            cout<<"Zero divisor not allowed";
            break;
        default:
            cout<<"Invaild operator";   
    }
    return 0;
}