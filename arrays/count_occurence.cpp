#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(10);

    cout << "Enter 10 elements: ";
    for(int i = 0; i < 10; i++){
        cin >> v[i];
    }

    int x;
    cout << "Enter your x: ";
    cin >> x;

    int count = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            count++;
        }
    }
    
    cout << "count = " << count;

    return 0;

}