#include<stdio.h>
void main()
{
    int number,f_num,s_num,l_num;

    printf("Enter any three digit number is :- ");
    scanf("%d",&number);

    printf("Enter number is :- %d ",number);

    f_num=number/100;
    s_num=number/10%10;
    l_num=number%10;

    printf("\nFirst digit number is %d \nSecond digit number is %d \nThird digit number is %d",f_num,s_num,l_num);


    printf("\nFirst number is :- ");
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



    printf("\nSecond number is :- ");
    if(s_num==1)
    {
        printf("One");
    }
    if(s_num==2)
    {
        printf("Two");
    }
    if(s_num==3)
    {
        printf("Three");
    }
    if(s_num==4)
    {
        printf("Four");
    }
    if(s_num==5)
    {
        printf("Five");
    }
    if(s_num==6)
    {
        printf("Six");
    }
    if(s_num==7)
    {
        printf("Seven");
    }
    if(s_num==8)
    {
        printf("Eight");
    }
    if(s_num==9)
    {
        printf("Nine");
    }
    if(s_num==0)
    {
        printf("Zero");
    }



    printf("\nLast number is :- ");
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


    printf("\nGood Byee......!");
}