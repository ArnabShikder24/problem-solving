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
    int a, b;
    cin >> a >> b;
    int found = 0;
    FOR(i, a, b) {
        int n = i, ok = 1;
        while(n > 0) {
            if(n % 10 != 4 && n % 10 != 7) {
                ok = 0;
            }
            n /= 10;
        }
        if(ok) {
            cout << i << " ";
            found = 1;
        }
    }

    if(found == 0)
        cout << -1;

    return 0;
}