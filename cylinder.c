#include<stdio.h>
void main()
{
    float pi,radius,height,area;
    pi=3.14159;

    printf("Enter the radius number is :- ");
    scanf("%f",&radius);

    printf("Enter the height number is :- ");
    scanf("%f",&height);

    area=(2*pi*radius*height)+(2*pi*radius*radius);
    printf("Area of Cylinder is %f :- ",area);
}