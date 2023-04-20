// arnabshikder2001	118A - String Task	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s, r;
   cin >> s;
   for(int i = 0; i < s.length(); i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
      }
      if(s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i') {
         r.append(1, '.');
         r.append(1, s[i]);
      }
   }
 
   cout << r << endl;
   return 0;
}