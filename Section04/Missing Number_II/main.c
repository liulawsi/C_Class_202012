
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, numbers[10]={0}, result[10]={0};

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);

         for(int i = 0; i < 9; i++)
         {                          //拆解9位數
             numbers[i] = n % 10;
             n = n / 10;
         }

         for(int i =0; i < 10; i++)
            result[i] = 0;          //清為0

         for(int i = 0; i < 9; i++)
             result[numbers[i]]++;  //填結果

         for(int i =0; i < 10; i++)
            if (result[i] == 0) printf("缺 %d\n", i);
     }
     return 0;
 }

