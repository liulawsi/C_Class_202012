#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;

    printf("�п�J���Z=");
    scanf("%d",&score);

    if (score >= 60)
    {
        printf("%d���ή�F�I\n",score);
    }else
    {
        printf("%d�����ή�I�I�I\n",score);
    }
    return 0;
}
