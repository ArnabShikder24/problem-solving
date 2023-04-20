// arnabshikder2001	236A - Boy or Girl	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   cin >> s;
   sort(s.begin(), s.end());
   s.erase(unique(s.begin(), s.end()), s.end());
   if(s.length() % 2 == 0)
      cout << "CHAT WITH HER!" << endl;
   else
      cout << "IGNORE HIM!" << endl;
   return 0;
}