#include <bits/stdc++.h>

using namespace std;

namespace SubstringCounter {
    int count(const string& mainString, const string& substring) {
        int count = 0;

        for (size_t i = 0; i <= mainString.length() - substring.length(); ++i) {
            if (mainString.substr(i, substring.length()) == substring) {
                ++count;
            }
        }

        return count;
    }
}

int main() {
    string mainString, substring;

    // Input the main string
    cout << "Enter the main string: ";
    cin >> mainString;

    // Input the substring to search for
    cout << "Enter the substring: ";
    cin >> substring;

    // Count the occurrences of the substring in the main string
    int occurrences = SubstringCounter::count(mainString, substring);

    // Output the result
    cout << "The substring \"" << substring << "\" appears " << occurrences << " times in the main string." << endl;

    return 0;
}
