//Recursion function in c programming 

#include<stdio.h>

/* 

    5!
    1*2*3*4*5

*/

int fact(int x)
{
    if(x<=1)
    {
        return 1;
    }
    return x*fact(x-1);
}

int main()
{
    int i;
    printf("\nEnter The number : ");
    scanf("%d",&i);
    printf("factorial  : %d",fact(i));
    return 0;
}