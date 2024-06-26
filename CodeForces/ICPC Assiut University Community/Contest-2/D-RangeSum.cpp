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
  while (n--)
  {
    LL n1, n2, mx, mi, r1, r2;
    cin >> n1 >> n2;
    mx = max(n1, n2);
    mi = min(n1, n2);
    mi--;
    r1 = mi * (mi + 1) / 2;
    r2 = mx * (mx + 1) / 2;
    cout << r2 - r1 << endl;
  }
  
  return 0;
}