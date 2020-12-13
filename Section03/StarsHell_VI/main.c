
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     // do-while & while版本

     int i,n;

     do
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         i = 0;
         while(i < n)
         {
             printf("＊");
             i++;
         }
         printf("\n\n");
     }while(n != 0);
     printf("結束程式了！\n");

     //--------------------------------------
     //  while & while版本
     /*
     int i,n;
     n = 1;
     while(n != 0)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         i = 0;
         while(i < n)
         {
             printf("＊");
             i++;
         }
         printf("\n\n");
     }
     printf("結束程式了！\n");
     */

     //--------------------------------------
     // do-while & for版本

     int n;

     do
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         for(int i = 0; i < n; i++)
         {
             printf("＊");
         }
         printf("\n\n");
     }while(n != 0);
     printf("結束程式了！\n");

     return 0;
 }

