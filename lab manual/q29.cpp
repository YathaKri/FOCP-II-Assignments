#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    float temps[30];
    float mintemp=0.0;

    cout << "Enter temperatures of 30 days:" << endl;

    for (int i = 0; i < 30; i++) {
        cout << "DAY" << (i + 1) << ": ";
        cin >> temps[i];
    }
    cout<<"The minimum tempreture recorded(month) : "<<*min_element(temps, temps + 30) << endl;

}