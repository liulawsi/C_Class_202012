
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     for(int i = 1; i < 10; i++) {
         for(int k = 2; k < 6; k++) {
			 printf("%dx%d=%d\t",k, i, (i*k));
		 }
		 printf("\n");
     }
     printf("\n");
     for(int i = 1; i < 10; i++) {
         for(int k = 6; k < 10; k++) {
			 printf("%dx%d=%d\t",k, i, (i*k));
		 }
		 printf("\n");
     }
     return 0;
 }

