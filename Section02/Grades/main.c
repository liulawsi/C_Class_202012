
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int score;

     while(1)
     {
        printf("�п�J���Z=");
        scanf("%d",&score);

        if (score >= 90)
        {
            printf("%d���OA�šI\n",score);
        }else if (score >= 80)
        {
            printf("%d���OB�šI\n",score);
        }else if (score >= 70)
        {
            printf("%d���OC�šI\n",score);
        }else if (score >= 60)
        {
            printf("%d���OD�šI\n",score);
        }else printf("%d���OE�šI\n",score);
        printf("----------------\n");
     }
     return 0;
 }
