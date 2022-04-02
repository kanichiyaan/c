/*
Three digit number input through the keyboard. Write a program to find the given number is 
Armstrong number or not
*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    printf("\nEnter the 3 digit no : ");
    scanf("%d",&a);
    b=a%10;
    c=b*b*b;
    d=a/10;
    e=d%10;
    f=e*e*e;
    g=d/10;
    h=g%10;
    i=h*h*h;
    j=i+f+c;
    printf("\n %d  %d  %d",h,e,b);
    printf("\n %d + %d + %d",i,f,c);
    /*
    c=(b*b*b)+(e*e*e)+(h*h*h);
    */
    if (a==j)
    {
        printf("\n%d is Armstrong Number",a);
    }
    else
    {
     printf("\n%d is not Armstrong Number",a);
    }
    return 0;
}