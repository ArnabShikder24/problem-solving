// arnabshikder2001	546A - Soldier and Bananas	GNU C++20 (64)	Accepted	0 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int k, n, w, total;
   cin >> k >> n >> w;
   // sum of natual number n*(n + 1) / 2
   total = (k * (w * ( w + 1) / 2) - n);
   if(total > 0)
      cout << total;
   else 
      cout << 0;
   return 0;
}