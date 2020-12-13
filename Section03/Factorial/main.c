#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result;

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         result = 1;
         for(int i = 1; i < n; i++)
         {
             printf("%dx", i);
             result = result * i;
         }
         result = result * n;
         printf("%d=%d\n\n",n, result);
     }
     return 0;
}
