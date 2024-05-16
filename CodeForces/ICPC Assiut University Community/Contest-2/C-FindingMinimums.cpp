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
  int n, k;
  cin >> n >> k;
  int slices = ceil((double)n / k);
  int remainder  = n % k;
  vector<vector<int>> arr(slices);
  for (int i = 0; i < slices; i++) {
    for (int j = 0; j < k; j++) {
      int t;
      cin >> t;
      arr[i].push_back(t);
      if(slices - 1 == i && remainder - 1 == j) {
        break;
      }
    }
    auto sm = min_element(arr[i].begin(), arr[i].end());
    cout << *sm << " ";
  }
  
  return 0;
}