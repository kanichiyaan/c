//Break and Continue

#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter the limit : ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
        if(i==17)
        break;
        if(i==5)
        continue;
    printf("\n%d",i);
    }
    return 0;
}