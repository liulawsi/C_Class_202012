
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int A,B;

     printf("�п�JA=");
     scanf("%d",&A);
     printf("�п�JB=");
     scanf("%d",&B);

     if (A > B)
     {
         printf("A > B\n");
     }
     if (A < B)
     {
         printf("B > A\n");
     }
     if (A == B)
     {
         printf("A = B\n");
     }
     return 0;
 }
