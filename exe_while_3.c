#include<stdio.h>
void main()
{
    int count,num;
    count=1;
    printf("Enter a Number :- ");
    scanf("%d",&num);


while (count<num)
    {
        printf("%d \n",count);
        count=count+1;
    }

    printf("Good byee...");
}