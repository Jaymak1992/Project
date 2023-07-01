 #include<stdio.h>
 void main()
 {
    int num_1,num_2;

    printf("Enter Number 1 is :- ");
    scanf("%d",&num_1);

    printf("Enter Number 2 is :- ");
    scanf("%d",&num_2);

    if(num_1<num_2)
    {
        printf("\n Number 1 is small :- ");
    }
    else if (num_1>num_2)
    {
        printf("\n Number 2 is small :- ");
    }
    else if (num_1==num_2)
    {
        printf("\n both Number are same :- ");
    }
    else
    {
        printf("\n Invalide input.....!");
    }

    
 }