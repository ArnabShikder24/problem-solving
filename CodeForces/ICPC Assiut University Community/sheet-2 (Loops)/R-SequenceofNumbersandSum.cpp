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
    while(1) {
        int n, m;
        cin >> n >> m;
        if(n <= 0 || m <= 0)
            break;
        auto [minV, maxV] = minmax({n, m});
        int sum = 0;
        FOR(i, minV, maxV){
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }

    return 0;
}