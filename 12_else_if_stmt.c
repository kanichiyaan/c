//If statement

#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter the Value : ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("\nThe given value is %d",a);
    }
    else if(a==0)
    {
       printf("\n%d is eqaul to 0",a);  
    }
    else if (a>0)
    {
        printf("\n%d is Positive value",a);
    }
    return 0;
}