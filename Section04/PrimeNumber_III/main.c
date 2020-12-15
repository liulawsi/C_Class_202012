
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int n, index, numbers[1000]={0};

     while(1)
     {
         printf("請輸入整數N=");
         scanf("%d", &n);
         for(int i = 2; i <= n / 2; i++) {
				index = i+i;
				while(index <= n) {
					numbers[index]++;
					index = index + i;
				}
			}
			for(int i = 2; i <= n ; i++) {
				if (numbers[i] == 0) printf("%d,",i);
			}
			printf("\n\n");
     }
     return 0;
 }

