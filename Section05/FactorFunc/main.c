
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int Factor(int n)
 {
     if (n==1) return 1;
     return Factor(n-1)*n;
 }

 int main()
 {
     int n;

     while(1)
     {
         printf("請輸入整數=");
         scanf("%d", &n);

         printf("%d! = %d\n\n", n, Factor(n));
     }
     return 0;
 }

