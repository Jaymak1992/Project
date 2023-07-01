// zodiac sign programm
#include<stdio.h>
void main()
{
    int month, date;

    printf("Enter a month :- ");
    scanf("%d",&month);

    printf("Enter the date :- ");
    scanf("%d",&date);

    if(month==3 && date>=21 && date<=31 || month==4 && date>=1 && date<=19)
    {
        printf("Zodiac sign is Aries and Symbol is The Ram");
    }
    else if (month==4 && date>=20 && date<=30 || month==5 && date>=1 && date<=20)
    {
       printf("Zodiac sign is Taurus and Symbol is The Bull");
    }
    else if (month==5 && date>=21 && date<=31 || month==6 && date>=1 && date<=20)
    {
        printf("Zodiac sign is Gemini and Symbol is The Twins");
    }
    else if (month==6 && date>=21 && date<=30 || month==7 && date>=1 && date<=22)
    {
        printf("Zodiac sign is Cancer and Symbol is The Crab");
    }
    else if (month==7 && date>=23 && date<=31 || month==8 && date>=1 && date<=22)
    {
        printf("Zodiac sign is Leo and Symbol is The Lion");
    }
    else if (month==8 && date>=23 && date<=31 || month==9 && date>=1 && date<=22)
    {
        printf("Zodiac sign is Virgo and Symbol is The Virgin");
    }
    else if (month==9 && date>=23 && date<=30 || month==10 && date>=1 && date<=22)
    {
        printf("Zodiac sign is Libra and Symbol is The Scales");
    }
    else if (month==10 && date>=23 && date<=31 || month==11 && date>=1 && date<=21)
    {
        printf("Zodiac sign is Scorpio and Symbol is The Scorpion");
    }
    else if (month==11 && date>=22 && date<=30 || month==12 && date>=1 && date<=21)
    {
        printf("Zodiac sign is Sagittarius and Symbol is The Archer");
    }
    else if (month==12 && date>=22 && date<=31 || month==1 && date>=1 && date<=19)
    {
        printf("Zodiac sign is Capricorn and Symbol is The Goat");
    }
    else if (month==1 && date>=20 && date<=31 || month==2 && date>=1 && date<=18)
    {
        printf("Zodiac sign is Aquarius and Symbol is The Water Bearer");
    }
    else if (month==2 && date>=19 && date<=29 || month==3 && date>=1 && date<=20)
    {
        printf("Zodiac sign is Pisces and Symbol is The Fishes");
    }
    
    
    
    
    
    
}