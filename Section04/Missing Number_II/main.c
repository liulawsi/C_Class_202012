
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, numbers[10]={0}, result[10]={0};

     while(1)
     {
         printf("�п�J���N=");
         scanf("%d", &n);

         for(int i = 0; i < 9; i++)
         {                          //���9���
             numbers[i] = n % 10;
             n = n / 10;
         }

         for(int i =0; i < 10; i++)
            result[i] = 0;          //�M��0

         for(int i = 0; i < 9; i++)
             result[numbers[i]]++;  //�񵲪G

         for(int i =0; i < 10; i++)
            if (result[i] == 0) printf("�� %d\n", i);
     }
     return 0;
 }

