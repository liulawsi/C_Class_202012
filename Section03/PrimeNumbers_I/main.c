
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n;
     bool isPrime;  // !! �ȥ��n #include <stdbool.h>

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);

         for(int i = 2; i <= n; i++)
         {
             isPrime = true;
             for(int k = 2; k < i; k++)
             {
                 if (i % k == 0) isPrime = false;
             }
             if (isPrime) printf("%d,", i);
         }

         printf("\n");
     }
     return 0;
 }

