
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, numbers[10];
     bool found = false;

     while(1)
     {
         for(int i = 0; i < 10; i++) {
             printf("請輸入數字%d=", (i+1));
             scanf("%d", &numbers[i]);
         }
         system("cls");  //清除console內容
         for(int i = 0; i < 10; i++) {
             printf("%d,", numbers[i]);
         }
         printf("\n");
         do
         {
             printf("請輸入欲搜尋的數字=");
             scanf("%d", &n);
             found = false;
             for(int i = 0; i < 10; i++) {
                if (numbers[i] == n) {
                    found = true;
                }
             }
             if (found) printf("有找到%d !\n", n);
             else printf("沒有找到%d !\n", n);
         }while(n != -1);
         printf("結束搜尋，重新輸入。\n");
     }
     return 0;
 }

