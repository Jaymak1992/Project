#include<stdio.h>
void main()
{
    int num1,num2,num3;

    printf("Enter Number 1 is :- ");
    scanf("%d",&num1);

    printf("Enter Number 2 is :- ");
    scanf("%d",&num2);

    printf("Enter Number 3 is :- ");
    scanf("%d",&num3);

    if(num1==num2 && num2==num3)
    {
        printf("All number are same");
    }
    else
    {
    

    if(num1>num2)
    {
        if(num3>num2)
        {
            printf("Number 2 is small ");
        }
        else
        {
            printf("Number 3 is small ");
        }
    }
    else
    {
        if(num3>num1)
        {
            printf("Number 1 is small ");
        }
    else
    {
        printf("Number 3 is small ");
    }
    }
}
}