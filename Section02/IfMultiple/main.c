#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("�п�J�Ʀr=");
    scanf("%d",&number);


    if (number % 2 == 0)
    {
        printf("%d�O2������\n",number);
    }else
    {
        printf("%d���O2������\n",number);
    }

    if (number % 3 == 0)
    {
        printf("%d�O3������\n",number);
    }else
    {
        printf("%d���O3������\n",number);
    }
    return 0;
}
