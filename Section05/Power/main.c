
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
         printf("== �p��X��n���� ==\n");
         printf("�п�JX=");
         scanf("%f", &x);
         printf("�п�Jn=");
         scanf("%d", &n);

         printf("%f^%d=%f\n", x, n, Power(x,n));
     }
     return 0;
 }

