
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int sum, numbers[5];

     while(1)
     {
         for(int i = 0; i < 5; i++)
         {
             printf("½Ð¿é¤J¼Æ¦r%d=", (i+1));
             scanf("%d", &numbers[i]);
         }

         for(int i = 0; i < 5; i++)
         {
             for(int k = i+1; k < 5; k++)
             {
                 printf("(%d,%d),", numbers[i], numbers[k]);
             }

         }
         printf("\n\n");
     }
     return 0;
 }

