
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int sum, numbers[5];

     while(1)
     {
         for(int i = 0; i < 5; i++)
         {
             printf("請輸入數字%d=", (i+1));
             scanf("%d", &numbers[i]);
         }
         printf("=======================\n");
         sum = 0;
         for(int i = 0; i < 4; i++)
         {
             sum = sum + numbers[i];
             printf("%d+", numbers[i]);
         }
         sum = sum + numbers[4];
         printf("%d=%d\n", numbers[4], sum);
         printf("平均=%d\n\n", sum/5);//這裡有個問題！要注意！
     }
     return 0;
 }

