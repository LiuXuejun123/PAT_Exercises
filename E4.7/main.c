#include <stdio.h>
double factorial(int N)
{
    double result=1;
    if(N==1||N==0)
    {return 1;}
    else{
        for(int i=1;i<=N;i++)
        {
            result*=i;
        }
    }
    return result;
}
int main() {
double answer=1;
int N;
scanf("%d",&N);
for(int i=1;i<=N;i++)
{
    answer+=1.0/factorial(i);
}
printf("%.8lf",answer);
    return 0;
}

