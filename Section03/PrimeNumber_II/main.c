#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, temp;

    while(1)
    {
        printf("�п�J���N=");
        scanf("%d", &N);
        temp = N;
        for(int i = 2; i < N; i++) {
			do {
				if (temp % i == 0) {
					temp = temp / i;
					printf("%d,",i);
				}
			}while(temp % i == 0);
		}
		printf("\n\n");
    }
    return 0;
}
