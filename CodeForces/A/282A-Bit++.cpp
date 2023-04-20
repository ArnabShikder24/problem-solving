// arnabshikder2001	A - Bit++	GNU C++20 (64)	Accepted 15 ms	0 KB
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s[1] == '+') {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x;
    return 0;
}

