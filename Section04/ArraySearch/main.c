
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, numbers[10];
     bool found = false;

     while(1)
     {
         for(int i = 0; i < 10; i++) {
             printf("�п�J�Ʀr%d=", (i+1));
             scanf("%d", &numbers[i]);
         }
         system("cls");  //�M��console���e
         for(int i = 0; i < 10; i++) {
             printf("%d,", numbers[i]);
         }
         printf("\n");
         do
         {
             printf("�п�J���j�M���Ʀr=");
             scanf("%d", &n);
             found = false;
             for(int i = 0; i < 10; i++) {
                if (numbers[i] == n) {
                    found = true;
                }
             }
             if (found) printf("�����%d !\n", n);
             else printf("�S�����%d !\n", n);
         }while(n != -1);
         printf("�����j�M�A���s��J�C\n");
     }
     return 0;
 }

