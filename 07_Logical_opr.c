//Logical  Operator

#include<stdio.h>

int main()
{
    int a; //>=35 and(&&) <=100
    printf("\nEnter the mark:");
    scanf("%d",&a);
    printf("\nLogical And : %d",(a>=35 && a<=100));
    printf("\nLogical Or : %d",(a>=35 || a<=100));
    printf("\nLogical And : %d",!(a>=35));
    return 0;
}