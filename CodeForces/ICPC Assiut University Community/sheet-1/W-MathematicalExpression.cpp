#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, c, e;
    char b, d;
    cin >> a >> b >> c >> d >> e;
    if((a + c == e && b == '+') || (a - c == e && b == '-') || (a * c == e && b == '*'))
        cout << "Yes";
    else
        if(b == '+')
            cout << a + c;
        else if(b == '-')
            cout << a - c;
        else
            cout << a * c;

    return 0;
}