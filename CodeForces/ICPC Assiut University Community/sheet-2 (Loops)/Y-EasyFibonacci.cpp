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
    int n, first = 0, second = 1;
    cin >> n;
    if(n == 1) {
        cout << first << endl;
    }
    else if(n == 2) {
        cout << first << " " << second << endl;
    }
    else {
        cout << first << " " << second << " ";
        for (int i = 2; i < n; i++) {
            int res = first + second;
            cout << res << " ";
            first = second;
            second = res;
        }
    }
    return 0;
}
