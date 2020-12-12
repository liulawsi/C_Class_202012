
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int score1,score2,score3;
     int total;

     printf("請輸入score1=");
     scanf("%d", &score1);
     printf("請輸入score2=");
     scanf("%d", &score2);
     printf("請輸入score3=");
     scanf("%d", &score3);

     total = score1 + score2 + score3;

     printf("三科總分=%d\n", total);

     return 0;
 }
