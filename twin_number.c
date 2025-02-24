#include <stdio.h>
int main()
{
    int a, b;

    printf("enter first number :\n");
    scanf("%d", &a);

    printf("enter second number :\n");
    scanf("%d", &b);

    if (a == b)
        printf("True \n");
    else
        printf("False \n");
}