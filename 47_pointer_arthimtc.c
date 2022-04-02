#include<stdio.h>

int main()
{
    int a;
    int *p,*r;
    p=&a;
    r=p+1;
    printf("\n Size of Integer : %d",sizeof(a));
    printf("\n Value of P : %d",p);
    printf("\n Value of R : %d",r);
}