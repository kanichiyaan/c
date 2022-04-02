#include<stdio.h>

int main()
{
    float bs,da,hra,gs;

    printf("\n Enter your basic salary:");
    scanf("%d",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra;
    printf("\n BS =%d",bs);
    printf("\n DA =%0.2f",da);
    printf("\n HRA =%0.2f",hra);
    printf("\n GS =%0.2f",gs);

    return 0;
}
