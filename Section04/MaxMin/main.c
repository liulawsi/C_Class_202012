
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int max, min, numbers[5];

     while(1)
     {
         for(int i = 0; i < 5; i++)
         {
             printf("�п�J�Ʀr%d=", (i+1));
             scanf("%d", &numbers[i]);
         }

         printf("=======================\n");

         max=numbers[0];
         for(int i = 1; i < 5; i++)
         {
             if (numbers[i] > max) max = numbers[i];
         }
         printf("�̤j��=%d\n\n", max);
     }
     return 0;
 }

