#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, b, c, minV, maxV;
    cin >> a >> b >> c;

    minV = min({a, b, c});
    maxV = max({a, b, c});

    cout << minV << " " << maxV;

    return 0;
}