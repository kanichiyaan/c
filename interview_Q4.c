/*
Temperature of a city in frahrenheit degrees  is input through the keyboard. Write a program
to convert this temperature into centigrades.
*/
#include<stdio.h>

int main()
{
    float f,c;
    printf("\nEnter the temperature of a city in F:");
    scanf("%f",&f);
    c=(f-32)*5.0/9.0;
    printf("\nCentigrades:%0.2f",c);
    return 0;
}