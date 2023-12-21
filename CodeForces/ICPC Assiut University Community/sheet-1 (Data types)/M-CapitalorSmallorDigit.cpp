#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    char c;
    cin >> c;
    if(isdigit(c))
        cout << "IS DIGIT";
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL";
    }
    else {
        cout << "ALPHA\nIS SMALL";
    }
    
    return 0;
}