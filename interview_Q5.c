/*
The length & breadth of a rectangle and radius of a circle are input through keyboard .
Write a program to calculate the area & perimeter of the rectangle, and the area &
circumference of the circle.

Rectangle
area = l*br
perimeter= 2(l+br)

circle
area = 2pie2
*/

#include<stdio.h>

int main()
{
    float l,br,r,a,p,ar,c;
    printf("\nEnter the length & breadth of rectangle:");
    scanf("%f%f",&l,&br);
    printf("\nEnter the radius of circle:");
    scanf("%f",&r);
    a=l*br;
   p=(2.0*(l+br));
    printf("\nthe area of the rectangle:%0.2f",a);
    printf("\nthe perimeter of the rectangle:%0.2f",p);
    ar=3.14*r*r;
    c=2.0*3.14*r;
    printf("\nthe area of the circle:%0.2f",ar);
    printf("\nthe circumference of the circle:%0.2f",c);
    
    return 0;
}
