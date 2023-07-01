#include<stdio.h>
void main()
{
    int yearly_income,total_income;

    printf("Enter the Yearly Income :- ");
    scanf("%d",&yearly_income);

    if (yearly_income<300000)
    {
        total_income=(yearly_income) - (yearly_income*5/100);
        printf("Your Yearly income is %d ",total_income);
    }
    else if (yearly_income>=300000 && yearly_income<500000)
    {
        total_income=(yearly_income) - (yearly_income*10/100);
        printf("Your Yearly income is %d ",total_income);
    }
    else if (yearly_income>=500000 && yearly_income<800000)
    {
        total_income=(yearly_income) - (yearly_income*20/100);
        printf("Your Yearly income is %d ",total_income);
    }
    else
    {
        total_income=(yearly_income) - (yearly_income*30/100);
        printf("Your Yearly income is %d ",total_income);
    }
    
    
    
}