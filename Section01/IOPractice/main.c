#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    float B;
    char name[20];

    printf("�п�JA=");
    scanf("%d", &A);
    printf("�п�JB=");
    scanf("%f", &B);
    printf("�п�Jname=");
    scanf("%s", name);

    printf("\n1.Your A=%d\n", A);
    printf("2.Your A=%8d\n", A);
    printf("3.Your A=%-8d\n", A);

    printf("1.Your B=%12f\n", B);
    printf("2.Your B=%12.2f\n", B);
    printf("3.Your B=%-12.2f\n", B);

    printf("\nYour B=%s\n", name);



    return 0;
}
