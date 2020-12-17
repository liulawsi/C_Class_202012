
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 void drawStarN(int n,bool newline)
 {
     for(int i = 0; i < n; i++)
         printf("＊");
	 if (newline) printf("\n");
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
             drawStarN(i+1, false);
             drawSpaceN((n-i-1)*2);
             drawStarN(i+1, true);
         }

         printf("\n");
     }
     return 0;
 }

