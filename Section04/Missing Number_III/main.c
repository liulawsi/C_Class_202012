
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, sum = 0;

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         sum = 0;
         for(int i = 0; i < 9; i++)
         {                          //拆解9位數
             sum = sum + (n % 10);  //算總和
             n = n / 10;
         }

         printf("缺 %d\n", (45-sum));
     }
     return 0;
 }

