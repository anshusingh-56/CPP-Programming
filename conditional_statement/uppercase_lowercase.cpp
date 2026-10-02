#include<iostream>
using namespace std;

int main () 
{
    char ch;

    cout<<"Enter character: ";
    cin>>ch;

    if(ch>=65 && ch<=90)
        cout<<"Uppercase";
    else if(ch>=97 && ch<=122)
        cout<<"Lowecase";
    else
        cout<<"Invalid Character";

    return 0;
}