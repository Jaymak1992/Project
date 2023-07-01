#include<stdio.h>
void main()
{
    float weight, foot_height, inch_height, meter_height, f_to_m, i_to_m,BMI;

    printf("Enter Your Weight in Kg :- ");
    scanf("%f",&weight);

    printf("Enter Your Height in Foot :- ");
    scanf("%f",&foot_height);

    printf("Enter Height in Inch :- ");
    scanf("%f",&inch_height);

    f_to_m = foot_height / 3.28;
    i_to_m = inch_height / 39.37;

    meter_height = f_to_m + i_to_m;
    BMI = weight / (meter_height * meter_height);
   
    printf("\n\n Your BMI is :- %.2f \n\n",BMI);

    if(BMI<18.5)
    {
        printf("You are Underweight ");
    }
    else if (BMI>=18.5 && BMI<25)
    {
        printf("You are Normal ");
    }
    else if (BMI>=25 && BMI<30)
    {
        printf("You are Overweight ");
    }
    else if (BMI>=30 && BMI<35)
    {
        printf("You are Obese");
    }
    else 
    {
        printf("You are Extermly obese");
    }

}