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
    string s;
    getline(cin, s);
    istringstream iss(s);
    string word;
    vector<string> words;
    while(iss >> word) {
      words.push_back(word);
    }
    cout << words[0][0] << words[1][0] << words[2][0] << endl;
  }
  return 0;
}