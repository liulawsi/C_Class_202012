
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int numbers[10];

     while(1)
     {
         for(int i = 0; i < 10; i++)
         {
             printf("�п�J�Ʀr%d=", (i+1));
             scanf("%d", &numbers[i]);
         }
         printf("=======================\n");
         for(int i = 0; i < 10; i++)
         {
             printf("%d,", numbers[i]);
         }
         printf("\n");
     }
     return 0;
 }

