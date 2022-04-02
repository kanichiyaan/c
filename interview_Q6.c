/*
Two numbers are input through the keyboard into two locations C and D. Write a Program
tp interchange the contents of C and D
*/

#include<stdio.h>

int main()
{
    int B,C,D;
    printf("\nEnter the value of C and D:");
    scanf("%d%d",&C,&D);
    printf("Before swapping C:%d and D:%d",C,D);
    B=C;
    C=D;
    D=B;

    /*
OTHER METHOD
C=C+D;
D=C-D;
C=C-D;

OR

C=C*D;
D=C/D;
C=C/D;
    */

    printf("After swapping C:%d and D:%d",C,D);
    return 0;
}