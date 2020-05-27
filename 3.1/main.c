#include <stdio.h>

int main()

{
    int a,b,c;
    int num[3]={0};
    int temp;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&num[i]);

    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2-i;j++)//第一个与第二个比较
        {
            if(num[j]>num[j+1])
            {

                temp=num[j];

                num[j]=num[j+1];

                num[j+1]=temp;
            }
        }
    }
    printf("%d->%d->%d\n",num[0],num[1],num[2]);
    return 0;
}
