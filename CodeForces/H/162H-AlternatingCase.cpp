#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   string s;
   cin >> s;
   for(int i = 0; i < s.length(); i++) {
      if(i % 2 == 1){
         if(s[i] > 'A' && s[i] < 'Z')
            s[i] += 'a' - 'A'; // lowercase
      }
      else {
         if(s[i] > 'a' && s[i] < 'z')
            s[i] -= 'a' - 'A'; // Uppercase
      }
   }
   cout << s;
   return 0;
}

// arnabshikder2001	162H - Alternating case	Factor	Accepted	372 ms	0 KB
//factorx
// USING: io kernel math sequences ;
// readln 0 swap [ 32 bitor 1 rot - 32 over * rot bitxor ] map print drop
