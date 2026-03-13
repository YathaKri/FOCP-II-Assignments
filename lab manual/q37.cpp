#include <iostream>
#include <string>
#include <cctype> // Required for isalnum()

using namespace std;

int main() {

    string username = "User123"; 
    bool isValid = true;

    if (username.length() == 0) {
        isValid = false;
    } else {
        for (int i = 0; i < username.length(); i++) {
            if (!isalnum(username[i])) {
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        cout << "Username '" << username << "' is ACCEPTED." << endl;
    } else {
        cout << "Username '" << username << "' is REJECTED (No spaces or symbols allowed)." << endl;
    }

    return 0;
}