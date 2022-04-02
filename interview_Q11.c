/*
A cashier has currency notes of denominations 10,50 and 100. 
If the Amount to be withdrawn is input through the keyboard in hundreds
find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
*/

#include<stdio.h>

int main()
{
    int amt;
    printf("\nEnter the Amount to be withdraw :");
    scanf("%d",&amt);
    printf("\n Required notes of Rs 100 : %d hundreds",(amt/100));
    printf("\n Required notes of Rs 50  : %d fiftys",(amt%100)/50);
    printf("\n Required notes of Rs 10  : %d tens",((amt%100)%50)/10);
    printf("\n Amount still remaining   : Rs %d",((amt%100)%50)%10);
    return 0;
}