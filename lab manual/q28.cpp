#include <iostream>
using namespace std;

int main() {
    int num[10];
    int eventotal = 0; 
    int oddtotal = 0;  

    cout << "Enter 10 numbers:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "No. " << (i + 1) << ": ";
        cin >> num[i];

        if (num[i] % 2 == 0) {
            eventotal += num[i];
        } else {
            oddtotal += num[i];
        }
    }

    cout << "\nSum of even numbers = " << eventotal << endl;
    cout << "Sum of odd numbers = " << oddtotal << endl;

    return 0;
}