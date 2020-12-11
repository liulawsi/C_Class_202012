
 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int age;

    printf("How old are you?");
    scanf("%d", &age);

    age = age + 10;

    printf("In ten years, you will be %d years old\n",age);
    return 0;
 }
