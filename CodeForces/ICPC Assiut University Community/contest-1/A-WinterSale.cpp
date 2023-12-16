#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    BOOST;
    long long a, b;
    cin >> a >> b;
    double x = ( 1.00 * b / (100 - a)) * 100;
    cout << fixed << setprecision(2) << x;
    return 0;
}
