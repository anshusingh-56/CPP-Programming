#include<iostream>
using namespace std;

int main() {

    float total, obtained, percentage;

    cout<<"Enter total marks: ";
    cin>>total;

    cout<<"Enter obtained marks: ";
    cin>>obtained;

    percentage = (obtained / total) *  100;
    
    cout<<"percentage = "<<percentage;

    return 0;
}