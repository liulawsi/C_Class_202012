
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int n;

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         for(int i = n; i > 0; i--)
         {
             for(int k = 0; k < i; k++)
             {
                 printf("��");
             }
             printf("\n");
         }
         printf("\n");
     }
     return 0;
 }

