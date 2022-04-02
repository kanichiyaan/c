/*
If a four digit number is a input through the keyboard, Write a program obtain
the sum of the first and last of this number.
*/
#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    printf("\nEnter the 4 digit no:");
    scanf("%d",&b);
    a=b%10;
    c=b/1000;
    d=c%10;
    e=a+d;
    printf("%d",e);
    return 0;
}