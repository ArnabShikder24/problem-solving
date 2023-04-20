#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int n, sum = 0;
   cin >> n;
   int arr[n][3];

   for(int i = 0; i < n; i++)
      for(int j = 0; j < 3; j++) {
         cin >> arr[i][j];
         sum += arr[i][j];
      }

   if(sum == 0)
      cout << "YES";
   else
   cout << "NO";

   return 0;
}