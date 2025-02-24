#include<stdio.h>
void main()
{
    int n,i;
    float c,big;

    printf("\n\nEnter the number of elements you wish to find the greatest element of : ");
    scanf("%d", &n);
    printf("\n\nEnter numbers :\n");
    scanf("%f", &big);

    for(i = 2; i <= n; i++)
    {
        scanf("%f", &c);
    if(big < c)  
        big = c;  
    }
    printf("\nThe largest of the %d numbers is %f ",n,big);
}
