#include<stdio.h>
void main()
{
    float unit,unit_bill,total_bill;

    printf("Enter the Electricity Units :- ");
    scanf("%f",&unit);

    if(unit<100)
    {
        unit_bill=unit*1;
        printf("\n\n Unit Bill is %.2f ",unit_bill);
        total_bill=(unit_bill*5/100)+(unit_bill);
        printf("\n\n Total Bill is %.2f ",total_bill);
    }
    else if (unit>=100 && unit<200)
    {
        unit_bill=unit*2;
        printf("\n\n Unit Bill is %.2f ",unit_bill);
        total_bill=(unit_bill*5/100)+(unit_bill);
        printf("\n\n Total Bill is %.2f ",total_bill);
    }
    else if (unit>=200 && unit<300)
    {
        unit_bill=unit*3;
        printf("\n\n Unit Bill is %.2f ",unit_bill);
        total_bill=(unit_bill*5/100)+(unit_bill);
        printf("\n\n Total Bill is %.2f ",total_bill);
    }
    else if (unit>=300 && unit<400)
    {
        unit_bill=unit*4;
        printf("\n\n Unit Bill is %.2f ",unit_bill);
        total_bill=(unit_bill*5/100)+(unit_bill);
        printf("\n\n Total Bill is %.2f ",total_bill);
    }
    else
    {
        unit_bill=unit*5;
        printf("\n\n Unit Bill is %.2f ",unit_bill);
        total_bill=(unit_bill*5/100)+(unit_bill);
        printf("\n\n Total Bill is %.2f ",total_bill);
    }
    
    
    
}