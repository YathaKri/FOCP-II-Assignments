#include <iostream>
using namespace std;

int main() {
    int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int Sum[3][3];

    // Add them together
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            Sum[row][col] = A[row][col] + B[row][col];
        }
    }

    // Print the result
    cout << "The Sum Matrix is:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << Sum[row][col] << " ";
        }
        cout << endl; 
    }

    return 0;
}