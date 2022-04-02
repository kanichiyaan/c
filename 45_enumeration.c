//Enumeration or enum in c

#include<stdio.h>

enum B{no=10,yes=20};

int main()
{
    enum point {x=10,y};
    enum B a;
    enum point b;
    a=yes;
    b=y;
    printf("\n%d",a);
    printf("\n%d",b);
    return 0;
}