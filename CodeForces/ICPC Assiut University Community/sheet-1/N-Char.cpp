#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    else
        c = c - 32;
    cout << c;

    return 0;
}