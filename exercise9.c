#include<stdio.h>
void main()
{
    int num;
    printf("Enter a Number :- ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("Number is even %d",num);
    }
    else 
    {
        printf("Number is odd %d",num);
    }
    
    
}