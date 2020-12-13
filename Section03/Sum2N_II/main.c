#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int n,sum;

      while(1)
      {
          printf("請輸入整數N=");
          scanf("%d", &n);
          sum = 0;
          for(int i = 1; i < n; i++)
          {
              printf("%d+", i);
              sum = sum + i;
          }
          sum = sum + n;
          printf("%d=%d\n\n", n, sum);
      }
      return 0;
 }

