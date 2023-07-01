#include<stdio.h>
void main()
{
    int Guj_Mark,Eng_Mark,Sci_Mark,Socialsci_Mark,Maths_Mark,Hindi_Mark,Com_Mark,sum;
    float per;

    printf("Enter the Gujarati Marks :- ");
    scanf("%d",&Guj_Mark);

    printf("Enter the English Marks :- ");
    scanf("%d",&Eng_Mark);

    printf("Enter the Science Marks :- ");
    scanf("%d",&Sci_Mark);

    printf("Enter the Social Science Marks :- ");
    scanf("%d",&Socialsci_Mark);

    printf("Enter the Mathematics Marks :- ");
    scanf("%d",&Maths_Mark);

    printf("Enter the Hindi Marks :- ");
    scanf("%d",&Hindi_Mark);

    printf("Enter the Computer Marks :- ");
    scanf("%d",&Com_Mark);

    sum = Guj_Mark + Eng_Mark + Sci_Mark + Socialsci_Mark + Maths_Mark + Hindi_Mark + Com_Mark;
    printf(" \n\nGujarati Marks is :- %d \n Englis Marks is :- %d \n Science Marks is :- %d \n Social Science Marks is :- %d \n Mathematics Marks is :- %d \n Hindi Marks is :- %d \n Computer Marks is :- %d \n\n\n Total= %d ",Guj_Mark,Eng_Mark,Sci_Mark,Socialsci_Mark,Maths_Mark,Hindi_Mark,Com_Mark,sum);

    per=sum/7;

    if(per<33)
    {
        printf("\n\n You Are Fail...");
        printf("\n\n\n Your Percentage is :- %.2f",per);
    }
    else if (per>=33 && per<45)
    {
        printf("\n\n You Are Pass...");
        printf("\n\n\n Your Percentage is :- %.2f",per);

    }
    else if (per>=45 && per<60)
    {
        printf("\n\n Your Grade is :- C ");
        printf("\n\n\n Your Percentage is :- %.2f",per);
    }
    else if (per>=60 && per<85)
    {
        printf("\n\n Your Grade is :- B ");
        printf("\n\n\n Your Percentage is :- %.2f",per);
    }
    else if (per>=85 && per<=100)
    {
        printf("\n\n Your Grade is :- A ");
        printf("\n\n\n Your Percentage is :- %.2f",per);
    }
    else
    {
        printf("\n\n Invalide Input ");
    }
}