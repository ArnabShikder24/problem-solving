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
    LL t;
    cin >> t;
    while (t--)
    {
        LL n, sum = 0;
        cin >> n;
        if(n % 2 == 0) {
            sum += (-n / 2);
        }
        else {
            sum += (-n/2) + 1;
        }
        PRINT(sum);
    }
    
    return 0;
}