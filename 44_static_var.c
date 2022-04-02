//Static Variable 

#include<stdio.h>

void dis();

int main()
{
    dis();
    dis();
    dis();
    dis();
    return 0;
}

void dis()
{
    static int a=1;
    a++;
    printf("\n A : %d ",a);
}
