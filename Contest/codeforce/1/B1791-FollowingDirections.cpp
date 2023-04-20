#include <iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int count, x = 0, y = 0, p = 0;
      string candy;
      cin >> count;
      cin >> candy;
      for (int j = 0; j < candy.length(); j++)
      {
         if(candy[j] == 'U') 
            y += 1;
         if(candy[j] == 'R') 
            x += 1;
         if(candy[j] == 'D') 
            y -= 1;
         if(candy[j] == 'L') 
            x -= 1;

         if(x == 1 && y == 1) {
            p = 1;
         }
         
      }
      if(p == 1)
         cout << "YES" << endl;
      else 
         cout << "NO" << endl;
      
   }
   
   return 0;
}