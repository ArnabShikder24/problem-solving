#include <stdio.h>

void myFunction1(int n) {
      if(n < 10) {
         printf("%d\n", n);
         return;
      }
      printf("%d\n", n%10);
      myFunction1(n/10);
   }

int main()
{
   // myFunction1(49271);
   // int x = 4, y;
   // y = (x / 10) * 100;
   // printf("%d\n", y);

   // int a[20], i = 3;
   // a[0] = 1;
   // a[1] = 2;
   // a[2] = 3;
   // while(i < 20) {
   //    a[i] = a[i - 1] + a[i - 2] + a[i - 3];
   //    i++;
   // }

   // for(i = 0; i < 20; i++) {
   //    printf("%d ", a[i]);
   // }

   
   
   return 0;
}