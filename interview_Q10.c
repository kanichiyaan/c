/*
In a town, the percentage of men is 52.The percentage of total literacy is if total percentage of literate
 men is 35 of the population, Write a program to find the total number of illiterate men and women. if 
 population of the town is 80,000.
*/

#include<stdio.h>

int main()
{
    int pm,pw,pl,lm,lw,ilm,ilw,p=80000;
    pm=(52*p)/100;
    pw=p-pm;
    pl=(48*p)/100;
    lm=(35*p)/100;
    lw=p-lm;
    ilm=p-lm;
    ilw=p-lw;
    printf("\nTotal population         : %d",p);
    printf("\nTotal Mens               : %d",pm);
    printf("\nTotal Womens             : %d",pw);
    printf("\nTotal literate Men       : %d",lm);
    printf("\nTotal literate Women     : %d",lw);
    printf("\nTotal literacy           : %d",pl);
    printf("\nTotal illiterate Men     : %d",ilm);
    printf("\nTotal illiterate Women   : %d",ilw);
    printf("\nTotal literacy     : %d",pl);
    return 0;
}