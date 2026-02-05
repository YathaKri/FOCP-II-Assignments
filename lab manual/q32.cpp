#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int stocks[5];

    cout << "Enter 5 stock values: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "stock no." << (i + 1) << ": ";
        cin >> stocks[i];
    }

    sort(stocks, stocks + 5);

    cout << "Highest: " << stocks[4] << endl;
    cout << "Second Highest: " << stocks[3] << endl;

    return 0;
}