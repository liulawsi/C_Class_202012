
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int sum, numbers[5];

     while(1)
     {
         for(int i = 0; i < 5; i++)
         {
             printf("�п�J�Ʀr%d=", (i+1));
             scanf("%d", &numbers[i]);
         }
         printf("=======================\n");
         sum = 0;
         for(int i = 0; i < 4; i++)
         {
             sum = sum + numbers[i];
             printf("%d+", numbers[i]);
         }
         sum = sum + numbers[4];
         printf("%d=%d\n", numbers[4], sum);
         printf("����=%d\n\n", sum/5);//�o�̦��Ӱ��D�I�n�`�N�I
     }
     return 0;
 }

