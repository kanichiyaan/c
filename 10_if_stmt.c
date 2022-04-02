//If statement

#include<stdio.h>
int main()
{
    char name[20];
    int age;
    printf("\nEnter Your Name :");
    scanf("%s",&name);
    printf("\nEnter the Age :");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("\n%s Age is %d Eligible to vote",name,age);
    }
    return 0;
}