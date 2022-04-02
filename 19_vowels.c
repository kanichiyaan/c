/*
Write a program to find the given character is vowels or not using Switch case.
aeiou
*/

#include<stdio.h>
int main()
{
    char a;
    printf("\nEnter the characters : ");
    scanf("%c",&a);
    switch (a)
    {
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
        printf("%c is vowel",a);
        break;
    default:
        printf("%c is not a vowel",a);
        break;
    }
    return 0;
}