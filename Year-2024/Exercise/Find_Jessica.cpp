#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

bool containsJessica(const string &input) {
    istringstream iss(input);
    string word;
    while (iss >> word) {
        if (word == "Jessica") {
            return true;
        }
    }
    return false;
}

int main() {
    string s;
    getline(cin, s);

    // Convert the input string to lowercase for case-insensitive matching
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << (containsJessica(s) ? "YES" : "NO") << endl;

    return 0;
}
