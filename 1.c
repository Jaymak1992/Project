#include<stdio.h>
void main()
{
    float Guj_mark,Eng_mark,Sci_mark,Social_Sci_mark,Maths_mark,Hindi_mark,Com_mark,sum,Per;

    printf("Enter Gujarati subject Mark :- ");
    scanf("%f",&Guj_mark);

    printf("Enter English subject Mark :- ");
    scanf("%f",&Eng_mark);

    printf("Enter Science subject Mark :- ");
    scanf("%f",&Sci_mark);

    printf("Enter Socia Science subject Mark :- ");
    scanf("%f",&Social_Sci_mark);

    printf("Enter Maths subject Mark :- ");
    scanf("%f",&Maths_mark);

    printf("Enter Hindi subject Mark :- ");
    scanf("%f",&Hindi_mark);

    printf("Enter Computer subject Mark :- ");
    scanf("%f",&Com_mark);

    sum=Guj_mark+Eng_mark+Sci_mark+Social_Sci_mark+Maths_mark+Hindi_mark+Com_mark;

    printf("\n Total Mark :- %f",sum);
    Per=sum*100/700;
    printf("\n\nStudent Percentage is :- %f",Per);
    
    if(Per>=35)
    {
        printf("\nResult is :- PASS");
    }
    if(Per<35)
    {
        printf("\nResult is :- FAIL");
    }

    printf("\n\nThank you......! ");

}