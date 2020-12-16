
 #include <stdio.h>
 #include <stdlib.h>

 void drawStarN(int n)
 {
     for(int i = 0; i < n; i++)
     {
         printf("＊");
     }
	 printf("\n");
 }

 int main()
 {
     int n;

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         for(int i = 1; i < n+1; i++)
         {
             drawStarN(i);
         }
         printf("\n");
     }
     return 0;
 }

