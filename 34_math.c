//Math function

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    printf("\nSQRT         : %0.2f",sqrt(a));
    printf("\nEnter the number : ");
    scanf("%d",&b);
    printf("\nEnter the power : ");
    scanf("%d",&c);
    printf("\nPOW           : %0.2f",pow(b,c));
    printf("\nabs           : %d",abs(-25));
    printf("\nCEIL          : %0.2f",ceil(3.2));
    printf("\nCEIL          : %0.2f",ceil(3.8));
    printf("\nFLOOR         : %0.2f",floor(3.2));
    printf("\nFLOOR         : %0.2f",floor(3.8));
    printf("\nROUND         : %0.2f",round(3.2));
    printf("\nROUND         : %0.2f",round(3.8));
    
    return 0;
}