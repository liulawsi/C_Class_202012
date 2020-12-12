
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
     int width, height,area;

     printf("請輸入長=");
     scanf("%d",&height);
     printf("請輸入寬=");
     scanf("%d",&width);

     area = height * width;
     printf("矩形面積=%d\n", area);
     return 0;
 }
