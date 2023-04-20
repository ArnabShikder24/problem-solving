#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   int i = 1;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      int arr[n];
      long long sum = 0;
      for(int i = 0; i < n; i++) {
         cin >> arr[i];
         sum += arr[i];
      }
      long long max = arr[0];
      for(int i = 0; i < n; i++) {
         if(max < arr[i]) {
            max = arr[i];
         }
      }
      cout << "Case " << i << ": " << sum + (max * (k - 1)) << endl;
      i++;
   }


   return 0;
}