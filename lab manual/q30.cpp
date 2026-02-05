#include <iostream>
using namespace std;

int main() {
    double salaries[10];
    double totalSalary = 0;
    double averageSalary = 0;
    
    #Enter salary
    cout << "Enter salaries for 10 employees:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Employee " << (i + 1) << ": ";
        cin >> salaries[i];
        
        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / 10.0;

    cout << "\nResults:" << endl;
    cout << "Total Salary: " << totalSalary << endl;
    cout << "Average Salary: " << averageSalary << endl;

    return 0;
}
