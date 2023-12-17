#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    char c;
    cin >> c;
    if(c == 'z')
        cout << 'a';
    else {
        char c1 = c + 1;
        cout << c1;
    }
    return 0;
}
