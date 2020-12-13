
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int numbers[10];

     for(int i = 0; i < 10; i++)
     {
         printf("½Ğ¿é¤J¼Æ¦r%d=", (i+1));
         scanf("%d", &numbers[i]);
     }
     printf("=======================\n");
     for(int i = 0; i < 10; i++)
     {
         printf("%d,", numbers[i]);
     }
     printf("\n");
     return 0;
 }

