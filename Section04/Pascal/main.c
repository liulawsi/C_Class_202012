
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10][10];

	for(int i = 0; i < 10; i++)
    {
		numbers[i][0] = numbers[i][i] = 1;
	}

	for(int i = 2; i < 10; i++)
	{
		for(int k = 1; k < i; k++)
		{
			numbers[i][k] = numbers[i-1][k-1] + numbers[i-1][k];
		}
    }

	for(int i = 0; i < 10; i++)
	{
		for(int k = 0; k <= i; k++)
		{
			printf("%5d",numbers[i][k]);
		}
		printf("\n");
	}
    return 0;
}
