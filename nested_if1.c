#include<stdio.h>
void main()
{
    float r1, r2, r3, h1, h2, h3, area1, area2, area3, pi;
    pi= 3.14159;

    printf("Enter cylinder 1 radius :- ");
    scanf("%f",&r1);

    printf("Enter cylinder 1 height :- ");
    scanf("%f",&h1);

    printf("Enter cylinder 2 radius :- ");
    scanf("%f",&r2);

    printf("Enter cylinder 2 height :- ");
    scanf("%f",&h2);

    printf("Enter cylinder 3 radius :- ");
    scanf("%f",&r3);

    printf("Enter cylinder 3 height :- ");
    scanf("%f",&h3);


    area1=pi*(r1*r1)*h2;
    printf("Area of cylinder 1 is :- %.2f  \n",area1);

    area2=pi*(r2*r2)*h2;
    printf("Area of cylinder 2 is :- %.2f  \n",area2);

    area3=pi*(r3*r3)*h3;
    printf("Area of cylinder 3 is :- %.2f  \n",area3);

    if(area1==area2 && area1==area3)
    {
        printf("All are same");
    }
    else
    {
        if(area1>area3 && area1==area2)
        {
            printf("Cylinder 1 and 2 both are large ans same");
        }

    else if (area1<area2)
    {
        if(area3<area2)
        {
            printf("Cylinder 2  is large");
        }
        else
        {
            printf("Cylinder 3 is large");
        }
    }
    else if (area1==area3)
    {
        printf("Cylinder 1 and 3 both are large and samll");
    }
    else if (area3<area1)
    {
        printf("Cylinder 1 is large");
    }
    else
    {
        printf("Cylinder 3 is large");
    }
 }
    
}


