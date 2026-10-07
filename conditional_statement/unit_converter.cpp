#include<iostream>
using namespace std;

int main()
{
    int choice;
    float value;

    cout << "1. Kilometers to Meters" << endl;
    cout << "2. Meters to Kilometers" << endl;
    cout << "3. Kilograms to Grams" << endl;
    cout << "4. Grams to Kilograms" << endl;

    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch(choice)
    {
        case 1:
            cout << "Result = " << value * 1000 << " meters";
            break;

        case 2:
            cout << "Result = " << value / 1000 << " kilometers";
            break;

        case 3:
            cout << "Result = " << value * 1000 << " grams";
            break;

        case 4:
            cout << "Result = " << value / 1000 << " kilograms";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}