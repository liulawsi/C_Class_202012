
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int score;

     while(1)
     {
        printf("請輸入成績=");
        scanf("%d",&score);

        if (score >= 90)
        {
            printf("%d分是A級！\n",score);
        }else if (score >= 80)
        {
            printf("%d分是B級！\n",score);
        }else if (score >= 70)
        {
            printf("%d分是C級！\n",score);
        }else if (score >= 60)
        {
            printf("%d分是D級！\n",score);
        }else printf("%d分是E級！\n",score);
        printf("----------------\n");
     }
     return 0;
 }
