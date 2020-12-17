
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 float Power(float base, int index)
 {
     float result = 1.0f;
     for(int i = 0; i < index; i++)
     {
         result = result * base;
     }
     return result;
 }

 int main()
 {
     int n;
     float x;

     while(1)
     {
         printf("== 計算X的n次方 ==\n");
         printf("請輸入X=");
         scanf("%f", &x);
         printf("請輸入n=");
         scanf("%d", &n);

         printf("%f^%d=%f\n", x, n, Power(x,n));
     }
     return 0;
 }

