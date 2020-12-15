
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, numbers[10];
     bool found = false;  //要 #include <stdbool.h>

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);

         for(int i = 0; i < 9; i++)
         {
             numbers[i] = n % 10;
             n = n / 10;
         }
         for(int i = 0; i < 10; i++)
         {
             found = false;
             for(int k = 0; k < 9; k++)
             {
                 if (numbers[k] == i) found = true;
             }
             if (!found) printf("缺%d\n", i);
         }
     }
     return 0;
 }

