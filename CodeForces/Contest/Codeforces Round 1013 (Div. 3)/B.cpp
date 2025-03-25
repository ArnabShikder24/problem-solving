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

void maxNumOfTeam() {
  LL n, x;
  cin >> n >> x;
  vector<int> arr(n);
  for(int i = 0; i < n; ++i) cin >> arr[i];
  sort(arr.rbegin(), arr.rend());

  int countTeam = 0;
  int sizeOFTeam = 1;

  for(int i = 0; i < n; i++) {
    if(sizeOFTeam * arr[i] >= x) {
      countTeam++;
      sizeOFTeam = 1;
    } else {
      sizeOFTeam++;
    }
  }
  cout << countTeam << endl;
}

int main() {
  BOOST;
  int t;
  cin >> t;
  while(t--) {
    maxNumOfTeam();
  }
  return 0;
}