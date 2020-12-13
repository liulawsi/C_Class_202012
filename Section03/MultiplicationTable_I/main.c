
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     for(int i = 2; i < 10; i++) {
			for(int k = 1; k < 10; k++) {
				printf("%dx%d=%d\t",i, k, (i*k));
			}
			printf("\n");
		}
     return 0;
 }

