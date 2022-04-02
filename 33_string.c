//

#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],c[20];
    char x[20]={'K','A','N','I','\0'};
    char y[20]={'K','U','M','A','R','\0'};
    printf("X : %s",x);
    printf("\nEnter the String : ");
    //scanf("%s",a); is take second input after the space 
    gets(a);
    printf("\nString          : %s",a);             
    printf("\nCompare         : %d",strcmp(x,a));
    printf("\nLength          : %d",strlen(a));
    printf("\nUpperCase       : %s",strupr(a));
    printf("\nLowerCase       : %s",strlwr(a));
    printf("\nCopy            : %s",strcpy(c,a));
    strcat(x,y);
    printf("\nConcatenation   : %s",x);
    printf("\nReverse         : %s",strrev(a));

    return 0;
}