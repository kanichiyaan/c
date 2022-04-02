//malloc in pointers

#include<stdio.h>
#include<stdlib.h>

int main()
{
    //void * malloc (size_t size)
    int i,n;
     printf("\nEnter the Limit : ");
    scanf("%d",&n);

    int *ptr=(int *)malloc(n*sizeof(int));
    if (ptr==NULL)
    {
        printf("\nMemory not Available ...");
        exit(1);
    }
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the integer : ");
        scanf("%d",ptr+i); 

    }
    for ( i = 0; i < n; i++)
    {
        printf("%d ",*(ptr+i)); 

    }
    
    
    return 0;
}