#include <iostream>
using namespace std;

int main()
{
    float marks[5];
    float total = 0;
    float percentage;

    cout << "Enter marks for 5 subjects (out of 100):" << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Subject " << i << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    percentage = (total / 5.0);

    cout << "\nTotal Marks = " << total << " out of 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}