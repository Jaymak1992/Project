#include<stdio.h>
void main()
{
    int num, f_num, l_num;


    printf("Enter any two digit number :- ");
    scanf("%d",&num);

    f_num = num / 10;
    l_num = num % 10;

    if (num < 10 ||  num > 99)
    {
        printf("Invalide number ");
    }
    else
    {
        switch (f_num)
        {
            case 1:
                printf("One");
                break;

            case 2:
                printf("Two");
                break;

            case 3:
                printf("Three");
                break;
                
            case 4:
                printf("Four");
                break;

            case 5:
                printf("Five");
                break;
            
            case 6:
                printf("Six");
                break;

            case 7:
                printf("Seven");
                break;

            case 8:
                printf("Eight");
                break;

            case 9:
                printf("Nine");
                break;

            case 0:
                printf("Zero");
                break;

         }

         printf("  ");

    switch (l_num)
    {
         case 1:
                printf("One");
                break;

            case 2:
                printf("Two");
                break;

            case 3:
                printf("Three");
                break;
                
            case 4:
                printf("Four");
                break;

            case 5:
                printf("Five");
                break;
            
            case 6:
                printf("Six");
                break;

            case 7:
                printf("Seven");
                break;

            case 8:
                printf("Eight");
                break;

            case 9:
                printf("Nine");
                break;

            case 0:
                printf("Zero");
                break;
        }
    }
}