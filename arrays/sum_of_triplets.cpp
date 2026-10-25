// Count the number of triplets whose is equal to the given value of x.

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,1,2,4,0,6};
    int x, size = 6;

    cout << "Enter target sum value: ";
    cin >> x;

    int triplets = 0;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            for(int k = j+1; k < size; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                triplets++;
                cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
                }
            }
        }
    }

    cout << "Total triplets = " << triplets;

    return 0;
}