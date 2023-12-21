#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    BOOST;
    long long n;
    cin >> n;
    int x = n / 1000;
    if (x % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
    return 0;
}