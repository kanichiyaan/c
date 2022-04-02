//For Loop
/*

*/

#include<stdio.h>
int main()
{
    int a,i;
    printf("\nEnter the Limit : ");
    scanf("%d",&a);
    for ( i=1; i<=a; i+=2)
    {
        printf("\n%d",i);
    }
    
    return 0;
}