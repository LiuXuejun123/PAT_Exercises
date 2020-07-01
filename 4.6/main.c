#include <stdio.h>
#include <math.h>
int narcissistic( int number )
{
    int remainder,sum=1,allsum=0;
    int x,count=0,end=1;  //初始化

    x=number;
    while(x!=0)
    {
        x=x/10;
        count++; //这里求位数N
    }

    x=number; //初始化x的值 进过while函数后x变化
    while(x!=0)
    {
        remainder=x%10;
        for(end;end<=count;end++)
        {
            sum*=remainder;
        }
        allsum+=sum;
        x=x/10;
        end=1;
        sum=1; //初始化end sum 的值，发现循环里面套循环 end的值会变的很大 sum也是
    }

    if(allsum==number)
    {
        return 1;
    }else
    {
        return 0;
    }
}

int fun(int N)
{
    for(int i=pow(10,N-1);i<pow(10,N);i++)
    {
if(narcissistic(i))
{
    printf("%d\n",i);
}

    }
}
int main() {
int N;
scanf("%d",&N);
fun(N);
return 0;
}
