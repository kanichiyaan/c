/*
Arithmatic operator
* / %
+ -
*/

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\n Enter two numbers:");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("\na+b= %d",c);
    c = a-b;
    printf("\na-b= %d",c);
    c = a*b;
    printf("\na*b= %d",c);
    c = a/b;
    printf("\na/b= %d",c);
    c = a%b;
    printf("\na%b= %d",c);
    return 0;
}