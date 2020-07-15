#include<stdio.h>
char a[80];
int i=0;
char d;
int main(){
    while((d=getchar())!='\n')
    {
        a[i]=d;
        i++;
    }

    for(int j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
}
