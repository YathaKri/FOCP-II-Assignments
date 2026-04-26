#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Bank {
private:
    unordered_map<long long, long long> accounts;

public:
    string create(long long userId, long long amount) {
        if (accounts.find(userId) == accounts.end()) {
            accounts[userId] = amount;
            return "true";
        } else {
            accounts[userId] += amount;
            return "false";
        }
    }

    string debit(long long userId, long long amount) {
        if (accounts.find(userId) != accounts.end() && accounts[userId] >= amount) {
            accounts[userId] -= amount;
            return "true";
        }
        return "false";
    }

    string credit(long long userId, long long amount) {
        if (accounts.find(userId) != accounts.end()) {
            accounts[userId] += amount;
            return "true";
        }
        return "false";
    }

    long long balance(long long userId) {
        if (accounts.find(userId) == accounts.end()) {
            return -1;
        }
        return accounts[userId];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    if (!(cin >> Q)) return 0;

    Bank myBank;

    while (Q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "CREATE") {
            long long x, y;
            cin >> x >> y;
            cout << myBank.create(x, y) << "\n";
        } 
        else if (cmd == "DEBIT") {
            long long x, y;
            cin >> x >> y;
            cout << myBank.debit(x, y) << "\n";
        } 
        else if (cmd == "CREDIT") {
            long long x, y;
            cin >> x >> y;
            cout << myBank.credit(x, y) << "\n";
        } 
        else if (cmd == "BALANCE") {
            long long x;
            cin >> x;
            cout << myBank.balance(x) << "\n";
        }
    }

    return 0;
}