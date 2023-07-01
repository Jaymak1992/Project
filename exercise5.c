#include<stdio.h>
void main()
{
    float base,height,Triangle1,Triangle2,Triangle3;

    printf("Enter the Triangle 1 base is :- ");
    scanf("%f",&base);

    printf("Enter the Triangle 1 height is :- ");
    scanf("%f",&height);
    
    Triangle1=base*height/2;
    printf("area of Triangle1 is :- %.2f\n",Triangle1);
    
    printf("Enter the Triangle 2 base is :- ");
    scanf("%f",&base);

    printf("Enter the Triangle 2 height is :- ");
    scanf("%f",&height);

    Triangle2=base*height/2;
    printf("area of Triangle2 is :- %.2f\n",Triangle2);


    printf("Enter the Triangle 3 base is :- ");
    scanf("%f",&base);

    printf("Enter the Triangle 3 height is :- ");
    scanf("%f",&height);

    Triangle3=base*height/2;
    printf("area of Triangle is :- %.2f\n",Triangle3);

    printf("base is %.2f height is %.2f\n",base,height);

    if(Triangle1==Triangle2 && Triangle2==Triangle3)
    {
        printf("All Triangle are same ");
    }
    else
    {
        if(Triangle1>Triangle2)
        {
            if(Triangle3>Triangle2)
            {
                printf("Triangle 2 is small ");
            }
            else
            {
                printf("Triangle 3 is small ");
            }

        }
    else
    {

        if(Triangle3>Triangle1)
        {
            printf("Triangle 1 is small ");
        }
        else
        {
            printf("Triangle 3 is small ");
        }
    }
}
}