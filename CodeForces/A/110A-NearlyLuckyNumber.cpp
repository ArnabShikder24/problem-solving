// arnabshikder2001	110A - Nearly Lucky Number	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int ok = 0;

    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '4' || n[i] == '7') {
            ok++;
        }
    }

    if(ok == 4 || ok == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

