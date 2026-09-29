#include<iostream>
using namespace std;

int main () {

    int age = 18;
    float marks = 75.5;
    char grade = 'B';

    cout<<"Before Update"<<endl;

    cout<<"Age = "<<age<<endl;
    cout<<"Marks = "<<marks<<endl;
    cout<<"Grade = "<<grade<<endl;

    age = 19;
    marks = 82.5;
    grade = 'A';

    cout<<"\nAfter Update"<<endl;

    cout<<"Age = "<<age<<endl;
    cout<<"Marks = "<<marks<<endl;
    cout<<"Grade = "<<grade<<endl;

    return 0;
}