//Double And Triple pointer

#include<stdio.h>

int main()
{
    int a=10,*p;
    int **q; // Double Pointer
    int ***r; // Triple Poiner
    p=&a; // Address of A


    printf("\n Value of A             : %d",a);
    printf("\n Address of A           : %d",&a);
    printf("\n Value of p             : %d",p);
    printf("\n Address of P           : %d",&p);
    printf("\n P Dereferencing        : %d",*p);
    printf("\n-----------------------------------------------------");
    q=&p;
    printf("\n Value of P             : %d",p);
    printf("\n Address of P           : %d",&p);
    printf("\n Value of Q             : %d",q);
    printf("\n Address of Q           : %d",&q);
    printf("\n Q Dereferencing        : %d",**q);
    printf("\n-----------------------------------------------------");
    r=&q;
    printf("\n Value of Q             : %d",q);
    printf("\n Address of Q           : %d",&q);
    printf("\n Value of R             : %d",r);
    printf("\n Address of R           : %d",&r);
    printf("\n R Dereferencing        : %d",***r);
}