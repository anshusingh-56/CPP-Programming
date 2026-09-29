#include<iostream>
using namespace std;

int main()
{
    string name;
    int id;
    char department;
    float salary;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter department code: ";
    cin >> department;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "\nEmployee Information" << endl;
    cout << "Name = " << name << endl;
    cout << "ID = " << id << endl;
    cout << "Department = " << department << endl;
    cout << "Salary = " << salary;

    return 0;
}