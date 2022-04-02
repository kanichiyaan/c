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
    int ch,q,tot,t=10,c=15,cc=25,ms=50;
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
        tot=c*q;
        break;
    case 2:
        printf("\nYou have selected Tea");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        tot=t*q;
        break;
    case 3:
        printf("\nYou have selected Cold Coffee");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        tot=cc*q;
        break;
    case 4:
        printf("You have selected Milk Shake");
        printf("\nEnter the Quantity : ");
        scanf("%d",&q);
        tot=ms*q;
        break;
    
    default:
        printf("\nInvalid Selection");
        break;
    }
    printf("\nTotal Amount : Rs %d",tot);
    return 0;
}