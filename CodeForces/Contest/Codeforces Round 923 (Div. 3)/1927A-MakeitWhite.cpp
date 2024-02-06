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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        int fb = -1, lb = -1;
        for (int i = 0; i < n; ++i) {

            if (s[i] == 'B') {
                if (fb == -1) {
                    fb = i;
                }
                lb = i;
            }
        }
        cout << max(1, lb - fb + 1) << endl;
    }

    return 0;
}
