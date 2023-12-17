#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long

bool isCheck(ll a, ll b, ll c, ll d) {
    bool check = (a + (b * c)) == d ||
                 ((a + b) * c) == d ||
                 ((a * b) + c) == d ||
                 (a * (b + c)) == d ||
                 (a - (b * c)) == d ||
                 ((a - b) * c) == d ||
                 ((a * b) - c) == d ||
                 (a * (b - c)) == d ||
                 (a + b - c) == d ||
                 (a - b + c) == d;

    return check;
}

int main() {
    BOOST;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if(isCheck(a, b, c, d)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}
