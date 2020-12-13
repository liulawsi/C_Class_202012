#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         for(int i = 1; i <= n; i++)
         {
             printf("%d,", i);
         }
         printf("\n\n");
     }
     return 0;
}
