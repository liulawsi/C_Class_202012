
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int A,B,C;

     printf("�п�JA=");
     scanf("%d",&A);
     printf("�п�JB=");
     scanf("%d",&B);
     printf("�п�JC=");
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
