
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int A,B;

     printf("請輸入A=");
     scanf("%d",&A);
     printf("請輸入B=");
     scanf("%d",&B);

     if (A > B)
     {
         printf("A > B\n");
     }
     else
     {
         if (A < B)
        {
            printf("B > A\n");
        }
        else
        {
            printf("A = B\n");
        }
     }
     return 0;
 }
