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
    int x, e = 0, o = 0, p = 0, n = 0;
    cin >> x;
    vector<LL> v(x);
    FOR(i, 0, x - 1) {
        cin >> v[i];
        if(v[i] > 0)
            p++;
        if(v[i] < 0)
            n++;
        if(v[i] % 2 == 0 || v[i] == 0)
            e++;
        else
            o++;
    }

    PRINT("Even: " << e);
    PRINT("Odd: " << o);
    PRINT("Positive: " << p);
    PRINT("Negative: " << n);

    return 0;
}