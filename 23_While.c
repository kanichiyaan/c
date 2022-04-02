/*
Looping statement 
1.Entry check loop
    While
    For
2.Exit Check Loop
    do while
While(condition)
{
    ----
    ----
    ----
}
*/

#include<stdio.h>
int main()
{
    int i=1,a;
    printf("\nEnter the Limit : ");
    scanf("%d",&a);
    while (i<=a)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}