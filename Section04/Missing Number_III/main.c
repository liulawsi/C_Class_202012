
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, sum = 0;

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         sum = 0;
         for(int i = 0; i < 9; i++)
         {                          //���9���
             sum = sum + (n % 10);  //���`�M
             n = n / 10;
         }

         printf("�� %d\n", (45-sum));
     }
     return 0;
 }

