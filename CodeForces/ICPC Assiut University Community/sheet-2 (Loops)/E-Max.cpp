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
    int n;
    cin >> n;
    vector<LL> v(n);
    FOR(i, 0, n - 1)
        cin >> v[i];

    LL maxV = v[0];

    FOR(i, 1, n - 1) {
        if(maxV < v[i]) {
            maxV = v[i];
        }
    }

    PRINT(maxV);

    return 0;
}