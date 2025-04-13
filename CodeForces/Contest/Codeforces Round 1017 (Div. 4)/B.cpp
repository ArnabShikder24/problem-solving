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
  cin.ignore();
  while(t--) {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    if(n == m) {
      cout << l << " " << r << endl;
      continue;
    }

    int day = abs(n - m);

    while (day && l < r) {
      if (l < 0) {
        ++l;
        --day;
      } else if (r > 0) {
        --r;
        --day;
      } else break;
    }

    cout << l << " " << r << endl;
  }

  return 0;
}