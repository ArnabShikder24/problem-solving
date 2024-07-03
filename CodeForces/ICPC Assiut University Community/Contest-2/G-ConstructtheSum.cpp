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
  while (t--)
  {
    LL n, s;
    cin >> n >> s;
    if((n * (n + 1)) / 2 < s) {
      cout << -1 << endl;
    }
    else {
      LL sum = 0;
      for (int z = n; z > 0; z--) {
        if(sum + z <= s && z != s) {
          sum += z;
          cout << z << " ";
        }
      }
      cout << endl;
    }
  }
  
  return 0;
}