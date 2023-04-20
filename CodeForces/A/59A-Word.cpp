// 197996654	Mar/18/2023 23:05UTC+6	arnabshikder2001	59A - Word	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int i, up = 0, low = 0;
   string s;
   cin >> s;
   for(i = 0; i < s.length(); i++) {
    if(s[i] >= 'A' && s[i] <= 'Z')
        up++;
    else
        low++;
   }

    for(i = 0; i < s.length(); i++) {
        if(up > low) {
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 'a' - 'A';
        }
        else {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 'a' - 'A';
        }
    }

    cout << s;
   return 0;
}
