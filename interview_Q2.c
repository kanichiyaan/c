/*
The distance between two cities  (in km) is input through the keyboard.write a program to 
covert and print this distance in meters,feet,inches and centimeters?
*/
#include<stdio.h>

int main()
{
    float km,m,cm,ft,i;
    printf("Enter the Kilo meter:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n KM %0.1f ",km);
    printf("\n M %0.1f ",m);
    printf("\n CM %0.1f ",cm);
    printf("\n inches %0.1f ",i);
    printf("\n Feet %0.1f ",ft);
    return 0;
}