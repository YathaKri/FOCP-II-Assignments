#include <iostream>
using namespace std;

int main() {

    int marks[3][5];

    cout << "Enter marks for 3 students (5 subjects each):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ":\n";
        for (int j = 0; j < 5; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\nMarks in 2nd subject of 1st student: " << marks[0][1] << endl;
    cout << "Marks in 5th subject of 3rd student: " << marks[2][4] << endl;
//test
    return 0;
}