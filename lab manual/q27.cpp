#include <iostream>
using namespace std;

int main() {
    float prices[10];
    float maxPrice;

    cout << "Enter prices of 10 items:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Item " << (i + 1) << ": ";
        cin >> prices[i];
    }

    maxPrice = prices[0];

    for (int i = 1; i < 10; i++) {
        if (prices[i] > maxPrice) {
            maxPrice = prices[i];
        }
    }

    cout << "\nMaximum Price among 10 items = " << maxPrice << endl;

    return 0;
}