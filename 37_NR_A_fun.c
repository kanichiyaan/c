//No Return With Argument Function in C
/*
 1.Function Declaration 
 2.Function Definition 
 3.Function Calling 

*/ 

#include<stdio.h>

//Function Declaration
void add(int,int);

int main()
{
    //Function Calling 
    int x,y;
    printf("\nEnter the Value of A & B : ");
    scanf("%d%d",&x,&y);
    add(x,y); //actual parameter
    return 0;
}

//Function Definition
void add(int a,int b) // formal parameter
{
int c;
c=a+b;
printf("\nTotal : %d",c);
}