/*
If the marks obtained by a student in different subjects are input through the keyboard,
fint out the aggregate marks and percentage marks obtained by the student.Assume that the 
maximum marks that can be obtained by a student in each subject is 100.
*/

#include<stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\n Enter Five marks:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    printf("\nTotal marks:%d",total);
    avg=total/5.0;
    printf("\nAverage :%0.2f",avg);
    return 0;
}