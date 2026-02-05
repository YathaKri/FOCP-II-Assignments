#include <iostream>
using namespace std;

int main() {
    int dC[5];
    int count = 0;

    cout << "Enter 5 defect codes to check:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Code " << (i + 1) << ": ";
        cin >> dC[i];
    }
    for (int i = 0; i < 5; i++) {
        if (dC[i] % 3 == 0 && dC[i] % 5 == 0) {
            count++;
        }
    }
    cout << "\nTotal codes divisible by 3 and 5: " << count << endl;

    return 0;
}