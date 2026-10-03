#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, s4, s5, total;
    float percentage;

    cout<<"Enter your all 5 subjects marks: ";
    cin>>s1>>s2>>s3>>s4>>s5;

    total = s1 + s2 + s3 + s4 + s5;

    percentage = ( total / 500.00 ) * 100;
    cout<<"Percentage = "<<percentage<<endl;

    if(percentage >= 90)
        cout<<"Grade A";
    else if(percentage >= 80)
        cout<<"Grade B";
    else if(percentage >= 70)
        cout<<"Grade C";
    else if(percentage >= 60)
        cout<<"Grade D";
    else
        cout<<"Grade F";

    return 0;
}