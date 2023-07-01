#include<stdio.h>
void main()
{
    int number,f_num,l_num;

    printf("Enter any two digit number :- ");
    scanf("%d",&number);

    printf("Number is %d",number);

    f_num=number/10;
    l_num=number%10;


    printf("\n First number is :- ");
    if(f_num==1)
    {
        printf("One");
    }
    if(f_num==2)
    {
        printf("Two");
    }
    if(f_num==3)
    {
        printf("Three");
    }
    if(f_num==4)
    {
        printf("Four");
    }
    if(f_num==5)
    {
        printf("Five");
    }
    if(f_num==6)
    {
        printf("Six");
    }
    if(f_num==7)
    {
        printf("Seven");
    }
    if(f_num==8)
    {
        printf("Eight");
    }
    if(f_num==9)
    {
        printf("Nine");
    }
    if(f_num==0)
    {
        printf("Zero");
    }
    

    printf("\n Second number is :- ");
    if(l_num==1)
    {
        printf("One");
    }
    if(l_num==2)
    {
        printf("Two");
    }
    if(l_num==3)
    {
        printf("Three");
    }
    if(l_num==4)
    {
        printf("Four");
    }
    if(l_num==5)
    {
        printf("Five");
    }
    if(l_num==6)
    {
        printf("Six");
    }
    if(l_num==7)
    {
        printf("Seven");
    }
    if(l_num==8)
    {
        printf("Eight");
    }
    if(l_num==9)
    {
        printf("Nine");
    }
    if(l_num==0)
    {
        printf("Zero");
    }

    printf("\nGood Bye......");
}