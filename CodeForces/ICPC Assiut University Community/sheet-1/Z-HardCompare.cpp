#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    BOOST;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if(b * log(a) > d * log(c))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
