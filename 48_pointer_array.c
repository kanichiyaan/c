#include<stdio.h>

int main()
{
    int a[]={10,20,30,40,50};
    int *p;

    p=&a;

    printf("\nAddress of A       : %d",&a);
    printf("\nSize of Integer    : %d",sizeof(int)); //4
    printf("\nSize of A          : %d",sizeof(a)); //20
    printf("\nLength of A        : %d",sizeof(a)/sizeof(int)); //5
    printf("\nAddress of A       : %d",&a); 
    printf("\nValue of P         : %d",p);

    p++;
    printf("\nValue of P         : %d",p);
    printf("\nValue of *P        : %d",*p);

    printf("\nValue of *++P       : %d",*++p);
    printf("\nValue of ++*P       : %d",++*p);
}