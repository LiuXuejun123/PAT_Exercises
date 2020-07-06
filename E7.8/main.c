#include<stdio.h>
int main()
{
    int n,m;//n指n*n,m指向右移动m个位置
    scanf("%d%d",&m,&n);
    if(n>=1&&n<=6)
    {
        int a[n][n];
        //int b[n][n];
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        m=m%n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][(n-m+j)%n]);//非常巧妙

            }
            printf("\n");
        }

    }
    return 0;
}