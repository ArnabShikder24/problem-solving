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

void findMinNumberOfDigitsPull() {
  unordered_map<int, int> dateNumCount = {
    {0, 3},
    {1, 1},
    {3, 1},
    {2, 2},
    {5, 1}
};
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; ++i) cin >> arr[i];

  

}

int main() {
  BOOST;
  int t;
  cin >> t;
  while (t--)
  {
    findMinNumberOfDigitsPull();
  }
  
  return 0;
}