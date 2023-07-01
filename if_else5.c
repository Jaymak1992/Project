#include<stdio.h>
void main()
{
    int year;

    printf("Enter a year :- ");
    scanf("%d",&year);

    year=year%1000;

    if(year==0)
    {
        printf("year is Milliniour ");
    }
    else
    {
        printf("Not millio.. ");
    }
}