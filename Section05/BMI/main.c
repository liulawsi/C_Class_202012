
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
         printf("�п�J����(����)=");
         scanf("%f", &height);
         printf("�п�J�魫(����)=");
         scanf("%f", &weight);

         printf("�A��BMI=%.1f\n", BMI(height, weight));
         printf("============================\n");
     }
     return 0;
 }

