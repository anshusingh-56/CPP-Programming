#include<iostream>
using namespace std;

int main(){

    int a[5], found = 0, i, n;

    cout << "Enter five numbers: ";

    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number to search: ";
    cin >> n;

    for(i = 0; i < 5; i++)
    {
        if(a[i] == n)
        {
            cout << "Element found at index " << i;
            found = 1;
            break;
        }
    }
    
    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
