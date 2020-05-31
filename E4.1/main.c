#include <stdio.h>
int fun(int num)
{
    int a=num%2==0?0:1;
    return a;
}
int main() {
    int num;
    int sum=0;
    scanf("%d",&num);
    while(num>0)
    {
        if(fun(num))
        {
            sum+=num;
        }
        scanf("%d",&num);
    }
    printf("%d",sum);
    return 0;
}
