#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype> // NEW: Included to use isalpha()

using namespace std;

// NEW: Helper function to check if the name only contains letters and spaces
bool isValidName(string name) {
    // Check if they just pressed Enter
    if (name.empty()) {
        return false; 
    }
    
    // Look at every character one by one
    for (int i = 0; i < name.length(); i++) {
        char c = name[i];
        // If it's not a letter AND not a space, it's invalid
        if (!isalpha(c) && c != ' ') {
            return false; 
        }
    }
    return true; 
}

int main() {
    string studentName;
    
    cout << "Welcome to the Ultimate Homework Excuse Generator!" << endl;
    cout << "Please enter the student's full name (letters only): ";
    getline(cin, studentName);

    // THE FIX: We now use our helper function in the while loop
    while (!isValidName(studentName)) {
        cout << "\nWhoops! The name cannot be blank and must only contain letters." << endl;
        cout << "Please enter a valid name: ";
        getline(cin, studentName);
    }

    // Store exactly 10 creative excuse templates in a vector
    vector<string> excuses = {
        "{name}'s dog didn't just eat the homework, it coded a better version and changed the password.",
        "Aliens abducted {name} and refused to return them until the math problems were solved.",
        "{name} accidentally used the homework as origami paper and now it's a very complex swan.",
        "A sudden, highly localized tornado strictly targeted {name}'s backpack.",
        "{name} dropped the assignment into a time machine, so it will be submitted 10 years ago.",
        "The Wi-Fi router became sentient and held {name}'s homework hostage for better bandwidth.",
        "{name} tried to print the homework, but the printer demanded sacrifices instead of ink.",
        "A raccoon broke in and swapped {name}'s essay with a highly detailed map of local trash cans.",
        "{name} was busy defending the earth from a zombie apocalypse. You're welcome.",
        "The homework was so brilliant that it spontaneously combusted in {name}'s hands."
    };

    // Seed the random number generator
    srand(time(0));

    // Randomly select an index from 0 to 9
    int randomIndex = rand() % excuses.size();
    string selectedExcuse = excuses[randomIndex];

    // Find and replace the "{name}" placeholder
    string placeholder = "{name}";
    size_t pos = selectedExcuse.find(placeholder);

    if (pos != string::npos) {
        selectedExcuse.replace(pos, placeholder.length(), studentName);
    }

    // Display the final result
    cout << "\nHere is your official excuse to give the teacher:" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << selectedExcuse << endl;
    cout << "------------------------------------------------------------------" << endl;

    return 0; 
}