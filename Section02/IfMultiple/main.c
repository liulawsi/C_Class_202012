#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("叫块计=");
    scanf("%d",&number);


    if (number % 2 == 0)
    {
        printf("%d琌2计\n",number);
    }else
    {
        printf("%dぃ琌2计\n",number);
    }

    if (number % 3 == 0)
    {
        printf("%d琌3计\n",number);
    }else
    {
        printf("%dぃ琌3计\n",number);
    }
    return 0;
}
