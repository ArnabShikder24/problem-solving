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
    while(n--) {
        int t;
        cin >> t;
        LL sum = 0;
        while(t--) {
            LL a = 0;
            cin >> a;
            sum += a;
        }
        LL root = static_cast<LL>(sqrt(sum));
        if (root * root == sum) {
            YES;
        } else {
            NO;
        }
        
    }
    return 0;
}