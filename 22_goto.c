    //Goto label

#include<stdio.h>
int main()
{
    int i=0;
    hi:
    printf("\n%d",i);
    i++;
    if(i!=5)
    {
        goto hi;
    }
    printf("\nEnd");
    return 0;
}