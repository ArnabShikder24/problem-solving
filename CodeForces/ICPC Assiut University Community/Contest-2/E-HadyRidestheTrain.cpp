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
  LL n;
  cin >> n;
  LL row = n / 4;
  LL l = 4 * row;
  LL h = l + 3;
  if(row % 2 == 1) {
    cout << row << " " << ((h == n) ? 0 : ((h - 1 == n) ? 1 : ((h - 2 == n) ? 2 : 3)));
  }
  else {
    cout << row << " " << ((h == n) ? 3 : ((h - 1 == n) ? 2: ((h - 2 == n) ? 1 : 0)));
  }
  return 0;
}