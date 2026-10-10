#include<iostream>
using namespace std;

void table();

void table(){
    int n, i;
    cout<<"Enter a numbedr: ";
    cin>>n;

    for(i = 1; i <= 10; i++)
    {
        cout << n << "x" << i << "=" << n * i <<endl;
    }
}
int main(){

    table();

    return 0;
}