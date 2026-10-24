#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(8);

    cout << "Enter 8 elements: ";
    for(int i = 0; i < 8; i++){
        cin >> v[i];
    }

    int x;
    cout << "Enter your x: ";
    cin >> x;

    // traversing starting to end occurrence
    int occurence = -1;
    for( int i = 0; i < v.size(); i++){
        if(v[i] == x){
            occurence = i;
        }
    }
    cout << "Occurence: " << occurence << endl;

    // traversing ending to start occurrence
    for( int i = v.size()-1; i >= 0; i--){
        if(v[i] == x){
            occurence = i;
            break;
        }
    }

    cout << "Occurence: " << occurence;

    return 0;
}