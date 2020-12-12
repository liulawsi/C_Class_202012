
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int A,B,C;

     printf("請輸入A=");
     scanf("%d",&A);
     printf("請輸入B=");
     scanf("%d",&B);
     printf("請輸入C=");
     scanf("%d",&C);

     if (A > B)
     {
         if (A > C) printf("The Max=%d\n", A);
         else printf("The Max=%d\n", C);
     }
     else
     {
         if (B > C) printf("The Max=%d\n", B);
         else printf("The Max=%d\n", C);
     }
     return 0;
 }
