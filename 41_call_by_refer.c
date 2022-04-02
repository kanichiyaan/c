//call by reference fun in c 

#include<stdio.h>

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main()
{
    int a,b;
    printf("\nEnter The Value of  A & B : ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap Value of A : %d  and B : %d",a,b);
    swap(&a,&b);
    printf("\nAfter swap Value of A  : %d  and B : %d",a,b);
    return 0;
}