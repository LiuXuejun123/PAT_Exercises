#include <stdio.h>
//英文辅音字母是除A、E、I、O、U以外的字母。本题要求编写程序，统计给定字符串中大写辅音字母的个数。

int main()
{   	//输入在一行中给出一个不超过80个字符、并以回车结束的字符串。
    char a[80];
    int d,i,j,k;
    i=0;
    while((d=getchar())!='\n'){
        a[i]=(char)d;
        i++;
    }
    a[i]='\0';

    k=0;
    //输出在一行中给出字符串中大写辅音字母的个数。
    for(j=0;j<i;j++){
        if(a[j]>='A'&&a[j]<='Z'&&a[j]!='A'&&a[j]!='E'&&a[j]!='I'&&a[j]!='O'&&a[j]!='U'){
            k++;
        }
    }
    printf("%d",k);

    return 0;

}
