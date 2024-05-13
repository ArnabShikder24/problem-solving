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
  for (int i = 1; i <= n; i++) {
    if(i % 2 == 0) {
      cout << "I love ";
    }
    else {
      cout << "I hate ";
    }

    if(i != n) {
      cout << "that ";
    }
    else {
      cout << "it";
    }
  }
  return 0;
}