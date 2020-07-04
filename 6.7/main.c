#include<stdio.h>
int main(void)
{
    int i,sum,sign=0;
    char op='0';    //初值
    scanf("%d",&sum);
    while(op!='='){
        scanf("%c",&op);
        if(op=='=')break;
        scanf("%d",&i);
        if(op=='+')
        sum=sum+i;
        else if(op=='-')
        sum=sum-i;
        else if(op=='*')
        sum=sum*i;
        else if(op=='/'){
            if(i!=0)
                sum=sum/i;
            else
                sign=1;
        }
        else
            sign=1;
    }
    if(sign==1)
    printf("ERROR");
    else
        printf("%d\n",sum);
    return 0;
}
