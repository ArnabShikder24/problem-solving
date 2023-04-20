#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int count;
      string dist, a, b;
      cin >> count;
      cin >> dist ;

      istringstream ss(dist);
      getline(ss, a, ',');
      getline(ss, b);

      cout << a << endl;
   }
   
   return 0;
}