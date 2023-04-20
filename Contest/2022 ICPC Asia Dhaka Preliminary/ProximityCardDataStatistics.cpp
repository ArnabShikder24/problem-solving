#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int n;
   cin >> n;

   map<string, int>map1;
   // map<string, int>map2;

   for(int i = 0; i < n; i++) {
      string s;
      cin >> s;
      int len = s.length();
      string arr1;
      string arr2;
      for(int i = 18; i < len; i++) {
         arr1 += s[i];
      }
      map1[arr1]++;
   }
   
   for (auto it = map1.begin(); it != map1.end(); it++) {
      cout << it->first << ": " << it->second << endl;
   }

   return 0;
}