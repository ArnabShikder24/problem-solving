#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,M1=0,M2=0,M3=0;

    for(i=1; i<=n; i++)
      for(j=i+1; j<=n; j++) {

        int and = i&j;
        int or = i|j;
        int xor = i^j;

        if(and<k && and>M1)
            M1=and;
        if(or<k && or>M2)
            M2=or;
        if(xor<k && xor>M3)
            M3=xor;
      }

    printf("%d\n", M1);
    printf("%d\n", M2);
    printf("%d\n", M3);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
