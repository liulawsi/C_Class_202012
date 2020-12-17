
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 double Max(double a, double b)
 {
     if (a > b) return a;
     else return b;
 }

 int main()
 {
     float m, n;

     while(1)
     {
         printf("請輸入第一個數字=");
         scanf("%f", &m);
         printf("請輸入第二個數字=");
         scanf("%f", &n);

         printf("Max(%f, %f) = %f\n", m, n, Max(m, n));
     }
     return 0;
 }

