
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
         printf("�п�J�Ĥ@�ӼƦr=");
         scanf("%f", &m);
         printf("�п�J�ĤG�ӼƦr=");
         scanf("%f", &n);

         printf("Max(%f, %f) = %f\n", m, n, Max(m, n));
     }
     return 0;
 }

