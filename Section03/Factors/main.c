
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int n;

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         printf("%d���]�Ʀ��G", n);
         for(int i = 1; i <= n; i++)
         {
             if (n % i == 0) printf("%d,", i);
         }
         printf("\n\n");
     }
     return 0;
 }

