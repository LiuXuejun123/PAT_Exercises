#include <stdio.h>
#include <math.h>
int main()
{
    double Accuracy=0;
    double Numerator=1;
    double denominator=1;
    scanf("%lf",&Accuracy);
    double result=0;
    int flag=0;
    double temp=Numerator/denominator;
    result=result+temp;
    while(temp>Accuracy)
    {   flag++;
        denominator=denominator+3;
        temp=Numerator/denominator;
        result+=pow(-1,flag)*temp;

    }
    printf("sum = %.6lf",result);
    return 0;
}
