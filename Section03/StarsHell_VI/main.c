
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     // do-while & while����

     int i,n;

     do
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         i = 0;
         while(i < n)
         {
             printf("��");
             i++;
         }
         printf("\n\n");
     }while(n != 0);
     printf("�����{���F�I\n");

     //--------------------------------------
     //  while & while����
     /*
     int i,n;
     n = 1;
     while(n != 0)
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         i = 0;
         while(i < n)
         {
             printf("��");
             i++;
         }
         printf("\n\n");
     }
     printf("�����{���F�I\n");
     */

     //--------------------------------------
     // do-while & for����

     int n;

     do
     {
         printf("�п�J���N=");
         scanf("%d", &n);
         for(int i = 0; i < n; i++)
         {
             printf("��");
         }
         printf("\n\n");
     }while(n != 0);
     printf("�����{���F�I\n");

     return 0;
 }

