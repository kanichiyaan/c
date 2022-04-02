/*
A library charges a fine for every book returned late.
For first 5days the fine is 50 paise,
for 6-10 days fine is 1 rupee and,
above 10 days fine is 5 rupee.
if you return the book after 30 days your membership will be cancelled.
Write a program to accept the number of days the member is late to return
the book and display the fine or the appropriate message.
*/

#include<stdio.h>
int main()
{
    int days;
    printf("\nEnter the days : ");
    scanf("%d",&days);
    if (days>=1&&days<=5)
    {
        printf("\nFine for %d day is : 50 paise",days);
    }
    else if(days>=6&&days<=10)
    {
        printf("\nFine for %d day is : 1 Rupee",days);
    }
    else if(days>=11&&days<=29)
    {
        printf("\nFine for %d day is : 5 Rupee",days);
    }
    else
    {
        printf("\nYour membership is cancelled due to you return book for %d days",days);
    }
    return 0;
}