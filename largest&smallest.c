#include <stdio.h>
void main(){
    int a,b,c,z;
    int max,min;
    printf("enter the 1 number :");
    scanf("%d",&a);
    printf("enter the 2 number :");
    scanf("%d",&b);
    printf("enter the 3 number :");
    scanf("%d",&c);
    printf("enter the 4 number :");
    scanf("%d",&z);
    max=a;
    min=a;
    if(b>max){
        max = b;
    }
    if(b<min){
         min = b;
    }
    if(c>max){
        max = c;
    }
    if(c<min){
         min = c;
    }
    if(z>max){
        max = z;
    }
    if(z<min){
        min = z;
    }
    printf("The largest is %d\n",max);
    printf("The smallest is %d\n",min);
}