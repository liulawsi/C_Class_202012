
 #include <stdio.h>
 #include <stdlib.h>

 void drawStarN(int n)
 {
     for(int i = 0; i < n; i++)
         printf("＊");
	 printf("\n");
 }

 void drawSpaceN(int n)
 {
     for(int i = 0; i < n; i++)
         printf("　");
 }

 int main()
 {
     int n;

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         for(int i = 0; i < n; i++)
         {
             drawSpaceN(n-i-1);
             drawStarN(i+1);
         }

         printf("\n");
     }
     return 0;
 }

