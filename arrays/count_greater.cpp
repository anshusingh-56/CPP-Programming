#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(6);

    cout << "Enter 6 elements: ";
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }

    int x;
    cout << "Enter your x: ";
    cin >> x;

    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > x){
            count++;
        }
    }
    
    cout << "Greater than " << x << " = " << count << " elements";

    return 0;

}