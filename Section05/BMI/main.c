
 #include <stdio.h>
 #include <stdlib.h>

 float BMI(float height, float weight)
 {
     return (weight/(height*height));
 }

 int main()
 {
     float height, weight;

     while(1)
     {
         printf("請輸入身高(公尺)=");
         scanf("%f", &height);
         printf("請輸入體重(公斤)=");
         scanf("%f", &weight);

         printf("你的BMI=%.1f\n", BMI(height, weight));
         printf("============================\n");
     }
     return 0;
 }

