#include <iostream>
#include <string>
#include <vector>
#include <random> // The modern C++ random library

// This line tells the compiler to use the standard library namespace by default
using namespace std; 

int main() {
    // 1. Ask the user for their name
    string userName;
    cout << "Enter your name to get roasted: ";
    
    // We use getline instead of cin >> so it can capture first and last names (spaces)
    getline(cin, userName); 

    // 2. Create a vector (which is like a flexible array/list) of exactly 10 roast templates
    vector<string> roasts = {
        "[NAME]'s code is the reason we need a backspace key.",
        "I would explain Big O notation to [NAME], but their code runs in O(no).",
        "When [NAME] writes code, even the compiler asks for a break.",
        "[NAME] thinks 'rubber duck debugging' means throwing the duck at the monitor.",
        "The only thing 'full-stack' about [NAME] is their list of syntax errors.",
        "I asked [NAME] to fix a bug, and they spawned three more. A true bug necromancer.",
        "If [NAME]'s codebase was a building, it would be condemned by the city.",
        "[NAME] uses dark theme because bugs are attracted to the light.",
        "'git commit -m \"Please work\"' is [NAME]'s signature programming move.",
        "[NAME]'s code doesn't need comments, it needs a priest."
    };

    // 3. Set up the modern C++ random number generator
    // 'random_device' reaches into your computer's hardware to find a truly random seed
    random_device rd; 
    
    // 'mt19937' is the "Mersenne Twister". It's a heavy-duty, highly reliable random engine.
    mt19937 gen(rd()); 

    // This sets the rules: give me a whole number between 0 and 9 (roasts.size() - 1)
    // with a perfectly equal probability of landing on any of them.
    uniform_int_distribution<> distrib(0, roasts.size() - 1);

    // 4. Pick the random number
    int randomIndex = distrib(gen);

    // 5. Get the randomly selected roast from the vector
    string selectedRoast = roasts[randomIndex];

    // 6. Find the placeholder "[NAME]" and replace it with the actual user's name
    string placeholder = "[NAME]";
    
    // .find() searches for the placeholder and returns its starting position
    size_t position = selectedRoast.find(placeholder);

    // string::npos means "not found". We check to make sure the placeholder actually exists.
    if (position != string::npos) {
        // .replace() swaps the text. 
        // Arguments: starting position, length of text to remove, what to insert instead
        selectedRoast.replace(position, placeholder.length(), userName);
    }

    // 7. Print the final customized roast to the console
    cout << "\n--- ROAST INCOMING ---\n";
    cout << selectedRoast << "\n";
    cout << "----------------------\n";

    return 0; // Tell the operating system the program ran successfully
}