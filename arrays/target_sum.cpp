// Find the total numbers of pairs in the array whose sum is equal to the given number of x.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,4,5,3,6};
    int x, size = 5;

    cout << "Enter target sum value: ";
    cin >> x;

    int pairs = 0;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == x){
                pairs++;
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    cout << "Total pairs = " << pairs;

    return 0;
}