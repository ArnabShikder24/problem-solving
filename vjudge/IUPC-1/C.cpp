#include <bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define LL long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define RFOR(i, a, b) for(int i = a; i >= b; --i)
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define DEBUG(x) cout << #x << " = " << x << endl;
#define PRINT(x) cout << x << endl;
#define FMT(x) fixed << setprecision(x)
#define MOD 1000000007

long long calculate(LL x, LL n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * x) % MOD;
        }
        x = (x * x) % MOD;
        n /= 2;
    }

    return result;
}

int main() {
    BOOST;
    LL x, n;
    cin >> x >> n;
    PRINT(calculate(x, n))
    return 0;
}