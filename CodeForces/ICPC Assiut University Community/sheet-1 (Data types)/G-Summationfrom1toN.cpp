#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long n, x;
    cin >> n;
    x = (n * (n + 1)) / 2;
    cout << x;
    return 0;
}