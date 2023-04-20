#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int max[6][6], m;

   for(int i = 1; i < 6; i++) 
   {
      for (int j = 1; j < 6; j++)
      {
         cin >> max[i][j];
         if(max[i][j] == 1)
         {
            m = abs(3 - i) + abs(3 - j);
            cout << m << endl;
         }
      }
      
   }

   return 0;
}