
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
             for(int k = 0; k < n; k++)
             {
                 printf("��");
             }
             printf("\n");
         }
         printf("\n");
     }
     return 0;
 }

