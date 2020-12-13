#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int a,n,result;

      while(1)
      {
          printf("請輸入整數a=");
          scanf("%d", &a);
          printf("請輸入整數n=");
          scanf("%d", &n);
          result = a;
          for(int i = 0; i < n-1; i++)
          {
              result = result * a;
          }
          printf("%d的%d次方=%d\n\n", a, n, result);
      }
      return 0;
 }

