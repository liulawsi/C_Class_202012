
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int n;

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);

         for(int i = 0; i < n; i++)
         {
             for(int w = 0; w < w-i-1; w++)
             {
                 printf("�@");
             }
             for(int k = 0; k <= i; k++)
             {
                 printf("��");
             }
             printf("\n");
         }

         printf("\n");
     }
     return 0;
 }

