#include<iostream>
using namespace std;

int main() {

    int a[2][2], b[2][2], mul[2][2];

    cout << "Enter your first matrix element: " << endl;

     for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter your second matrix element: " << endl;

    for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    // Multiplication of two matrix

     for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mul[i][j] = 0;

            for (int k = 0; k < 2; k++) {
                 mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiplication of matrix" << endl;

     for(int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}