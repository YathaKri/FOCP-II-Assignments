#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

class MovieTicket {
private:
    unordered_map<int, unordered_set<int>> movieBookings;
    const int MAX_SLOTS = 100;

public:
    string book(int userId, int movieId) {
        if (movieBookings[movieId].size() >= MAX_SLOTS || movieBookings[movieId].count(userId)) {
            return "false";
        }
        movieBookings[movieId].insert(userId);
        return "true";
    }

    string cancel(int userId, int movieId) {
        if (movieBookings.find(movieId) != movieBookings.end() && movieBookings[movieId].count(userId)) {
            movieBookings[movieId].erase(userId);
            return "true";
        }
        return "false";
    }

    string isBooked(int userId, int movieId) {
        if (movieBookings.count(movieId) && movieBookings[movieId].count(userId)) {
            return "true";
        }
        return "false";
    }

    int availableTickets(int movieId) {
        if (movieBookings.find(movieId) == movieBookings.end()) {
            return MAX_SLOTS;
        }
        return MAX_SLOTS - movieBookings[movieId].size();
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    if (!(cin >> Q)) return 0;

    MovieTicket system;

    for (int i = 0; i < Q; ++i) {
        string command;
        cin >> command;

        if (command == "BOOK") {
            int x, y;
            cin >> x >> y;
            cout << system.book(x, y) << "\n";
        } 
        else if (command == "CANCEL") {
            int x, y;
            cin >> x >> y;
            cout << system.cancel(x, y) << "\n";
        } 
        else if (command == "IS_BOOKED") {
            int x, y;
            cin >> x >> y;
            cout << system.isBooked(x, y) << "\n";
        } 
        else if (command == "AVAILABLE_TICKETS") {
            int y;
            cin >> y;
            cout << system.availableTickets(y) << "\n";
        }
    }

    return 0;
}