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
    LL e, m, b, t = 0;
    cin >> e >> m >> b;
    if(e>0 && b>0){
        if(e>=m && b>=m) {
            t += m;
            e -= m;
            b -= m;
            m = 0;
            if(e/2>0 && b>=e/2) {
                t += e / 2;
                e -= e / 2;
                b -= e / 2;
                cout << t;
            }
        }
        else {
            LL minV = min(e, b);
            cout << minV;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}