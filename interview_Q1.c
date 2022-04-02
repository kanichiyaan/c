/*
Ramesh's basic salary is input through the keyboard. His dearness alllowance is 40% of Basic salary,
and house rent allowance is 20% of basic salary.Write a program to calculate his gross salary?
*/

#include<stdio.h>

int main()
{
    float bs,da,hra,gs,x,y,z,k;

    printf("\n Enter your basic salary:");
    scanf("%f",&bs);
    /*da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra; */
    printf("\n Enter your DA in percentage:");
    scanf("%f",&x);
    y=x/100;
    da=bs*y;
     printf("\n Enter your HRA in percentage:");
    scanf("%f",&z);
    k=z/100;
    hra=bs*k;
    gs=bs+da+hra; 
    printf("\n DA =%0.2f",da);
    printf("\n HRA =%0.2f",hra);
    printf("\n GS =%0.2f",gs);

    return 0;
}