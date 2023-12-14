#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "Difference = " << (a * b) - (c * d);
    return 0;
}