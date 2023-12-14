#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long a, b;
    cin >> a >> b;
    a %= 10;
    b %= 10;
    cout << a + b;
    return 0;
}