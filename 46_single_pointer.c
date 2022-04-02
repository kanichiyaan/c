//single pointer

#include<stdio.h>

int main()
{
    int a=10,*p;
    p=&a; // Address of A

    printf("\n Value of A             : %d",a);
    printf("\n Address of A           : %d",&a);
    printf("\n Value of p             : %d",p);
    printf("\n Address of P           : %d",&p);
    printf("\n P Dereferencing        : %d",*p);
}