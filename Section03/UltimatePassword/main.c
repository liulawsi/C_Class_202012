#include <stdio.h>
#include <stdlib.h>  //要使用rand亂數產生函式需要這一個函式庫
#include <time.h>    //要使用rand亂數產生函式需要這一個函式庫

int main()
{
    int upper, lower, guess, bomb = 77;
    srand(time(NULL));  //讓亂數依時間變化做初始化
    while(1)
    {
        upper = 100;
        lower = 1;
        bomb = (rand() % 100) +1;
        do
        {
            printf("請輸入整數(%d ~ %d)：", lower, upper);
            scanf("%d", &guess);
            if ((guess < lower) || (guess > upper))
            {
				printf("超出範圍！\n");
				continue;
			}else {
				if (guess < bomb)
				{
				    printf("大一點！\n");
					lower = guess + 1;
				}else if (guess > bomb)
				{
				    printf("小一點！\n");
					upper = guess - 1;
				}
			}
        }while(guess != bomb);
        printf("\n爆！！炸彈就是 %d ！\n\n", bomb);
    }
    return 0;
}

