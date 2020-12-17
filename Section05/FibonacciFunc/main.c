
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int Fib(int n)
 {
     if (n == 0) return 0;
     if (n == 1) return 1;
     return Fib(n-1) + Fib(n-2);
 }

 int main()
 {
     for(int i = 0; i < 20; i++)
     {
         printf("%d, ", Fib(i));
     }
     return 0;
 }

