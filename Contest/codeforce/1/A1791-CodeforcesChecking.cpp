#include <iostream>
using namespace std;

int main()
{
   int n;
   char code[100];
   cin >> n;
   for (int i = 0; i < n; i++)
      cin >> code[i];

   for (int i = 0; i < n; i++)
   {
      if(code[i] == 'c' || code[i] == 'o' || code[i] == 'd' || code[i] == 'e' || code[i] == 'f' || code[i] == 's' || code[i] == 'r')
         cout << "YES" << endl;
      else 
         cout << "NO" << endl;
   }
   
   
   return 0;
}