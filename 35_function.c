//

#include<stdio.h>
void add()
{
    int a,b,c;
    printf("\nEnter the Value of A : ");
    scanf("%d",&a);
    printf("\nEnter the Value of B : ");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal : %d",c);
}
int main()
{
    int n,i;
    printf("\nEnter The Limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        add();
    }
    return 0;
}