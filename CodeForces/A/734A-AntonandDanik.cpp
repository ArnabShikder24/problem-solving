// arnabshikder2001	734A - Anton and Danik	GNU C++20 (64)	Accepted	31 ms	200 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a = 0, d = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'A')
            a++;
        else
            d++;
    }

    if(a > d)
        cout << "Anton";
    else if(a < d)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}

