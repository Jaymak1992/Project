#include<stdio.h>
void main()
{
    int number,f_num,l_num;

    printf("Enter any two digit number is :- ");
    scanf("%d",&number);

    if(number>=10 && number<=99)
    {
        f_num=number/10;
        l_num=number%10;

        printf("First number is %d Last number is %d ",f_num,l_num);
    }
    else
    {
        printf("\n\n Invalide Number...");
    }

    printf("\n\n Good Byee.........");
}