#include <stdio.h>
void main(){
    int n;
    printf("enter 5 number\n");
    scanf("%d",&n);
    int x = n%10;
    n = n/10;
    int y = n%10;
    n = n/10;
    int z = n%10;
    n = n/10;
    int q = n%10;
    n = n/10;
    int j = n%10;
    printf("%d  %d  %d  %d  %d\n",j,q,z,y,x);
    }