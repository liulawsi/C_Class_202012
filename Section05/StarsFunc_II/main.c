
 #include <stdio.h>
 #include <stdlib.h>

 void drawStarN(int n)
 {
     for(int i = 0; i < n; i++)
     {
         printf("��");
     }
	 printf("\n");
 }

 int main()
 {
     int n;

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         for(int i = 1; i < n+1; i++)
             drawStarN(i);

         for(int k = n-1; k > 0; k--)
             drawStarN(k);
         printf("\n");
     }
     return 0;
 }

