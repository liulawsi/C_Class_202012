#include <stdio.h>
#include <stdlib.h>  //�n�ϥ�rand�üƲ��ͨ禡�ݭn�o�@�Ө禡�w
#include <time.h>    //�n�ϥ�rand�üƲ��ͨ禡�ݭn�o�@�Ө禡�w

int main()
{
    int upper, lower, guess, bomb = 77;
    srand(time(NULL));  //���üƨ̮ɶ��ܤư���l��
    while(1)
    {
        upper = 100;
        lower = 1;
        bomb = (rand() % 100) +1;
        do
        {
            printf("�п�J���(%d ~ %d)�G", lower, upper);
            scanf("%d", &guess);
            if ((guess < lower) || (guess > upper))
            {
				printf("�W�X�d��I\n");
				continue;
			}else {
				if (guess < bomb)
				{
				    printf("�j�@�I�I\n");
					lower = guess + 1;
				}else if (guess > bomb)
				{
				    printf("�p�@�I�I\n");
					upper = guess - 1;
				}
			}
        }while(guess != bomb);
        printf("\n�z�I�I���u�N�O %d �I\n\n", bomb);
    }
    return 0;
}

