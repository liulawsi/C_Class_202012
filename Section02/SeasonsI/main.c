
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int month;

     while(1)
     {
         printf("�п�J����G");
         scanf("%d",&month);

         if (month <= 3)
         {
             printf("�K�u\n");
         }else if(month <= 6)
         {
             printf("�L�u\n");
         }else if(month <= 9)
         {
             printf("��u\n");
         }else if(month <= 12)
         {
             printf("�V�u\n");
         }
     }
     return 0;
 }
