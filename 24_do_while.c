//Do while
/*
do
{
    ----
    ----
}while(condtion)
*/

#include<stdio.h>
int main()
{
    int a,i=0;
    printf("\nEnter the Limit : ");
    scanf("%d",&a);
    do
    {
        printf("\n%d",i);
        i+=2; //i=i+2;
    } while (i<=a);
    
    return 0;
}