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

int maxCoins(int n, const string& path) {
    vector<int> dp(n + 1, 0);
    dp[1] = (path[1] == '@') ? 1 : 0;

    for (int i = 2; i <= n; ++i) {
        if (path[i] == '@') {
            dp[i] = max(dp[i - 1], dp[i - 2]) + 1;
        } else {
            dp[i] = max(dp[i - 1], dp[i - 2]);
        }
    }
    return dp[n];
}

int main() {
    BOOST;
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string path;
        cin >> path;
        cout << maxCoins(n, path) << endl;
    }
    
    return 0;
}