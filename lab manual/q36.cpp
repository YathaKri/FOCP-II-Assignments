#include <iostream>
using namespace std;

int main() {
    int m = 2, n = 3; 
    int p = 3, q = 2;

    int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int B[3][2] = { {7, 8}, {9, 10}, {11, 12} };
    int Result[2][2] = {0}; 

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            for(int k = 0; k < n; k++) {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result of A x B:" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            cout << Result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}