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

int main() {
    BOOST;
    double a, k, n;
    cin >> n >> k >> a;
    LL x = (k * n) / a;
    double q = (k * n) / a, test = q - x;
    if(test > 0) {
        cout << "double" << endl;
    }
    else if(q > 2147483647) {
        cout << "long long" << endl;
    }
    else {
        cout << "int" << endl;
    }
    return 0;
}