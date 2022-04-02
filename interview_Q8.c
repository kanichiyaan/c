/*
Ifa five digit number is input through keyboard, Write a program to reverse the number 
*/

#include<stdio.h>

int main()
{
    int a1,a,b,c,d,e,f,g,h,i;
    printf("\nEnter the 5 digit no:");
    scanf("%d",&a);
    a1=a%10;
    b=a/10;
    c=b%10;
    d=b/10;
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    i=h%10;
    printf("%d%d%d%d%d",a1,c,e,g,i);
    return 0;
}