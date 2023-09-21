#include <bits/stdc++.h>
using namespace std;

int main() {
    string t, p;
    cin >> t >> p;
    int tLen = t.length();
    int pLen = p.length();
    int max = tLen - pLen + 1;
    int ok = 0;
    // Bangladesh
    //ang
    for(int i = 1; i <= max; i++) {
        for(int j = 0; j < pLen; j++) {
            if(p[j] != t[i + j - 1]) {
                break;
            }
            if(j == pLen - 1)
                ok = i;
        }
        if(ok)
            break;
    }
    cout << ok;
    return 0;
}
