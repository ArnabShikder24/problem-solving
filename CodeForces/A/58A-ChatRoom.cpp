#include <string>
#include <bits/stdc++.h>
using namespace std;

bool canSayHello(const string &s) {
    string target = "hello";
    int index = 0;

    for (char c : s) {
        if (c == target[index]) {
            index++;
            if (index == target.size()) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (canSayHello(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
