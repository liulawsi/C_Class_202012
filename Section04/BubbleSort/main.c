
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int n, temp, numbers[10];

     while(1)
     {
         for(int i = 0; i < 5; i++)
         {
             printf("請輸入整數%d=", (i+1));
             scanf("%d", &numbers[i]);
         }

         for(int i = 0; i < 4; i++)
         {
			for(int k = 0; k < 4; k++)
			{
				if (numbers[k] > numbers[k+1])
				{
					temp = numbers[k];
					numbers[k] = numbers[k+1];
					numbers[k+1] = temp;
				}
			}
		 }
		 for(int i = 0; i < 5; i++) {
			 printf("%d,",numbers[i]);
		 }
		 printf("\n\n");
     }
     return 0;
 }

