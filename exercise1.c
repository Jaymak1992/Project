#include<stdio.h>
void main()
{
    int planet_number;

    printf("Enter select planet number \n 1 for EARTH \n 2 for JUPITER \n 3 for MARS \n 4 for MERCURY \n 5 for NEPTUNE \n 6 for PLUTO \n 7 for SATURN \n 8 for URANUS \n 9 for VENUS ");
    printf("\n Enter selected planet number :- ");
    scanf("%d",&planet_number);

    if(planet_number==1)
    {
        printf("\n\n Distance from sun :- 149,600,000");
    }
    else if (planet_number==2)
    {
        printf("\n\n Distance from sun :- 778,300,000");
    }
    else if (planet_number==3)
    {
        printf("\n\n Distance from sun :- 227,900,000");
    }
    else if (planet_number==4)
    {
        printf("\n\n Distance from sun :- 57,900,000");
    }
    else if (planet_number==5)
    {
        printf("\n\n Distance from sun :- 4,497,000,000");
    }
    else if (planet_number==6)
    {
        printf("\n\n Distance from sun :- 5,900,000,000");
    }
    else if (planet_number==7)
    {
        printf("\n\n Distance from sun :- 1,427,000,000");
    }
    else if (planet_number==8)
    {
        printf("\n\n Distance from sun :- 2,870,000,000");
    }
    else if (planet_number==9)
    {
        printf("\n\n Distance from sun :- 108,200,000");
    }
    else
    {
        printf("\n\n\n Invalide Input.............!");
    }



}