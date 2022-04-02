//control operator statement

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter the value of A and B : \n");
    scanf("%d %d",&a,&b);
    c=a>b?a:b;
    printf("\nThe greatest No is : %d",c);
    c=a<b?a:b;
    printf("\nThe Smallest No is : %d",c);
    return 0;
}