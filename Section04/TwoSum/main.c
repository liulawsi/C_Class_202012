
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdbool.h>

 int main()
 {
     int numbers[] = {1,2,4,8,13,33,25};
	 int n, arraySize;
	 bool found = false;

     arraySize = sizeof(numbers) / sizeof(numbers[0]);
	 while(1)
     {
        printf("�п�J���N=");
        scanf("%d", &n);
		found = false;
		for(int i = 0; i < arraySize; i++)
        {
            for(int k = 0; k < arraySize; k++)
            {
                if ((numbers[i]+numbers[k]) == n)
                {
                    printf("%d+%d=%d\n", numbers[i], numbers[k]
								,(numbers[i]+numbers[k]));
                    found = true;
                }
            }
        }
		if (!found) printf("�L�ѵ��I\n");
     }
     return 0;
 }

