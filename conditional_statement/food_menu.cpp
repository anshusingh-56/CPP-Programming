#include<iostream>
using namespace std;

int main()
{
    int choice;

    cout << "1. Pizza" << endl;
    cout << "2. Burger" << endl;
    cout << "3. Sandwich" << endl;
    cout << "4. Pasta" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You selected Pizza";
            break;

        case 2:
            cout << "You selected Burger";
            break;

        case 3:
            cout << "You selected Sandwich";
            break;

        case 4:
            cout << "You selected Pasta";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}