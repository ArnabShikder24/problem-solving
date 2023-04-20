#include <stdio.h>

int main()
{
   // int i, j, n = 5;
   // for(i = 0; i < n; i++) {
   //    for ( j = 0; j < n; j++)
   //    {
   //       if(j + i >= n) {
   //          break;
   //       }
   //       printf("*");
   //    }
   //    printf("\n");
      
   // }
   int i;
   for ( i = 1; i < 10; i++) {
      if(i % 7)
         printf("%d\n", i);
      else
         break;
      i++;
   }
   
   return 0;
}