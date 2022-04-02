//bitwise operators

#include<stdio.h>
int main()
{
    int a=25,b=45,c;
    printf("\nBitwise And   : %d",a&b);
    printf("\nBitwise Or    : %d",a|b);
    printf("\nBitwise Xor   : %d",a^b);
    printf("\nBitwise Not   : %d %d",~a,~b);
    a=16;
    b=a<<2;
    c=a>>2;
    printf("\n Left Shift  : %d",b);
    printf("\n Right Shift : %d",c);

    return 0;
}