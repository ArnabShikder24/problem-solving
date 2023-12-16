#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    BOOST;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if(pow(a, b) > pow(c, d))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
