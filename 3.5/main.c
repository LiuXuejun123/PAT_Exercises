#include<stdio.h>
int main()
{
    int year, i;
    scanf("%d",&year);
    if(year <= 2000 || year > 2100)
    {printf("Invalid year!\n");}
    else if (year > 2000 && year < 2004)
    {printf("None\n");}
    else
    {
        for(i = 2004; i <= year; i++)
            if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            {
                printf("%d\n",i);
            }
    }
    return 0;
}