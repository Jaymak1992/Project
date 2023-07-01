#include<stdio.h>
void main()
{
    int year, miniyear;

    printf("Enter a year :- ");
    scanf("%d",&year);


    miniyear=year%4;
    if(miniyear==0)
    {
        printf("leap");
        
    }
    else
    {
        printf("not leap");
    }
}