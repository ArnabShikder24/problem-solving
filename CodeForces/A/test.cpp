#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   cin >> s;
   // sort(s.begin(), s.end());
   string r = unique(s.begin(), s.end());
   cout << r;
   return 0;
}