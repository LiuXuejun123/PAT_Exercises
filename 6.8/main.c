#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    gets(a);//输入字符串
    int m,num;
    m=strlen(a);//字符串长度
    if(a[0]==' ')
        num=0;
    else
        num=1;
    for(int i=0;i<m-1;i++)//最后一个字符为结束符
    {
        if(a[i]==' ' && a[i+1]!=' ')
            num++;
    }
    printf("%d\n",num);
    return 0;
}