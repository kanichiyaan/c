/*
If a five digit number is input through the keyboard,Write a program to calculate the sum
of its digits.(Hint: Use the modulus operator'%')
*/

#include<stdio.h>

int main()
{
    int a,aa,b,c,d,e,f,g,h,i,j,k,sum=0;
    printf("\nEnter the 5 digit No:");
    scanf("%d",&a);
    aa=a%10;
    sum+=aa;
    b=a/10;
    c=b%10;
    sum+=c;
    d=b/10;
    e=d%10;
    sum+=e;
    f=d/10;
    g=f%10;
    sum+=g;
    h=f/10;
    i=h%10;
    sum+=i;
    printf("\nTotal :%d",sum);
    return 0;
}