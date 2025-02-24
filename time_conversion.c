#include <stdio.h>
void main(){
    int n,h,m,s;
     printf("enter how much second do you want to convert\n");
     scanf("%d",&n);
     h = n/3600;
     int x = n%3600;
     m = x/60;
     s = x%60;
     printf("%d:%d:%d",h,m,s);
}