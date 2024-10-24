#include <bits/stdc++.h>
using namespace std;

bool commonItem(vector<char> &arr1, vector<char> &arr2) {
   unordered_map<char, bool> map;

   for(int i = 0; i < arr1.size(); i++) {
      if(!map[arr1[i]]) {
         map[arr1[i]] = true;
      }
   }

   for(int i = 0; i < arr2.size(); i++) {
      if(map[arr2[i]]) {
         return true;
      }
   }

   return false;
}

int main() {
   vector<char> arr1 = {'a', 'b', 'c', 'x'};
   vector<char> arr2 = {'e', 'f', 'h', 'd'};

   bool result = commonItem(arr1, arr2);
   cout << result << endl;
   return 0;
}
