// arnabshikder2001	791A - Bear and Big Brother	GNU C++20 (64)	Accepted	15 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int a, b;
   cin >> a >> b;
   
   int limak, bob, year = 0;
   limak = a;
   bob = b;

   while(limak <= bob) {
      limak *= 3;
      bob *= 2;
      year++;
   }

   cout << year;
   return 0;
}