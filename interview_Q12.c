/*
If the total selling price of 15 items and the totel profit earned on them is input through the 
keyboard , Write a program to find the cost price of item.
*/

#include<stdio.h>

int main()
{
    float s,p,c;
    printf("\nEnter the selling price of 15 Items :");
    scanf("%f",&s);
    printf("\nEnter the Profit :");
    scanf("%f",&p);
    c=(s-p)/15;
    printf("\nCost price of 1 item : Rs %0.2f",c);
    return 0;
}