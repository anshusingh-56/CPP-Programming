#include<iostream>
using namespace std;

int main ()
{
    char ch;
    
    cout<<"Enter Character: ";
    cin>>ch;

    if(( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || ( ch == 'a' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        cout<<"Character is Vowel";
    else
        cout<<"Character is consonent";

    return 0;
}