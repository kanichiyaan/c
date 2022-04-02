/*
Write a program for the following output using switch case

Menu Card
    1.Coffee
    2.Tea
    3.Cold Coffee
    4.Milk Shake

  Enter Your Choice : 2

  You have selected Tea
  Enter the Quantity : 5
  Total Amount : 50 
*/

#include<stdio.h>
int main()
{
    int ch,q,i,tot,net=0,t=10,c=15,cc=25,ms=50;
    hi :
    printf("\nMenu Card");
    printf("\n    1.Coffee       Rs.15\n    2.Tea          Rs.10\n    3.Cold Coffee  Rs.25\n    4.Milk Shake   Rs.50 \n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\nYou have selected Coffee");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        net=net+(q*c);
        break;
    case 2:
        printf("\nYou have selected Tea");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        net=net+(q*t);
        break;
    case 3:
        printf("\nYou have selected Cold Coffee");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        net=net+(q*cc);
        break;
    case 4:
        printf("You have selected Milk Shake");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        net=net+(q*ms);
        break;
    
    default:
        printf("\nInvalid Selection");
        break;
    }
    printf("\nDo you want to continue press 1 : ");
    scanf("%d",&i);
    if(i==1)
    {
        goto hi;
    }
    printf("\nThank you come again...");
    printf("\nTotal Amount : Rs %d",net);
    return 0;
}