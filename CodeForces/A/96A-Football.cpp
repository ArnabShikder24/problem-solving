//arnabshikder2001	96A - Football	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   string s1;
   cin >> s1;

   int x = 0, y = 0, z = 0;
   for(int i = 0; i < s1.length(); i++) {
      if(s1[i] == '0') {
         x++;
         y=0;
      }
      else {
         y++;
         x=0;
      }
      
      if(x == 7 || y == 7) {
         z = 1;
         break;
      }
   }

   if(z) 
      cout << "YES";
   else
      cout << "NO";

   return 0;
}