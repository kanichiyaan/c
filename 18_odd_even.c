/*
Any integer is input through the keyboard. Write a program to find out whether 
it is an odd number or even number.
(Hint : Use the % (modulus) operator)
*/

#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the Value : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even number",a);
    }
    else
    {
        printf("%d is odd number",a);
    }
    return 0;
}