//Assignment operator

#include<stdio.h>

int main()
{
    int a=10,b=5;
    printf("A : %d",a);
    //+=
    a+=10; //a=a+10
    printf("\nA : %d",a);
    //-=
    a-=3; //a=a-3
    printf("\nA : %d",a);
    //*=
    a*=10; //a=a*10
    printf("\nA : %d",a);
    ///=
    a/=10; //a=a/10
    printf("\nA : %d",a);
    //%=
    a%=10; //a=a%10
    printf("\nA : %d",a);
    return 0;
}