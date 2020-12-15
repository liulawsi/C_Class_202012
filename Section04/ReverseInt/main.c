
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int n;

     while(1)
     {
         printf("請輸入整數=");
         scanf("%d", &n);

         do
         {
             printf("%d", (n % 10));
             n = n / 10;
         }while(n > 0);
         printf("\n\n");
     }
     return 0;
 }

