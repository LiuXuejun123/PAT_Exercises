#include <stdio.h>
#include <math.h>
double fact(int num)
{
    double result=1;
    for(int i=1;i<=num;i++)
    {
        result*=i;
    }
    return result;
}
int main() {
double x;
double result=1;
int i=1;
scanf("%lf",&x);
while(pow(x,i)/fact(i)<0.00001)
{
    result+=pow(x,i)/fact(i);
    i++;
}
printf("%lf",result);
    return 0;
}
