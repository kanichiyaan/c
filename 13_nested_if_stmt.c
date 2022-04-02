//Nested year

#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter the Year : ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\n%d is Leap year",year);
        }
        else
        {
            printf("\n%d is Not leap year",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("\n%d is Leap year",year);
        }
        else
        {
            printf("\n%d is Not leap year",year);
        }
    }
    return 0;
}