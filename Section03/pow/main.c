#include <stdio.h>
#include <stdlib.h>

 int main()
 {
     int a,n,result;

      while(1)
      {
          printf("�п�J���a=");
          scanf("%d", &a);
          printf("�п�J���n=");
          scanf("%d", &n);
          result = a;
          for(int i = 0; i < n-1; i++)
          {
              result = result * a;
          }
          printf("%d��%d����=%d\n\n", a, n, result);
      }
      return 0;
 }

