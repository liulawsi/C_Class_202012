#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;

    printf("請輸入成績=");
    scanf("%d",&score);

    if (score >= 60)
    {
        printf("%d分及格了！\n",score);
    }else
    {
        printf("%d分不及格！！！\n",score);
    }
    return 0;
}
