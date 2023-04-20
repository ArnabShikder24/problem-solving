#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define FOR(a, b, c) for(int a = b; a < c; ++a)

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   LL a = 123456789;
   LL b = 123456789;
   int arr[5] = {2, 4, 3, 4, 5};
   int size = 5;

   // cout << a * b << endl;

   // FOR(i, 0, 6){
   //    cout << i << endl;
   // }

   for(int i : arr)
      cout << i << " ";

   return 0;
}