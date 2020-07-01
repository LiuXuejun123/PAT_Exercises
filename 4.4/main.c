#include <stdio.h>
#include <math.h>
long fun(int a,int n)
{   long result=0;
    for(int i=1;i<=n;i++)
    {
        int temp=pow(10,i-1)*a;
        result+=temp;
    }
    return result;
}
int fun2(int a,int n)
{ int result=0;
for(int i=1;i<=n;i++)
{
    result+=fun(a,i);
}

return result;
}

int main() {
int a,n;
long result;
scanf("%d %d",&a,&n);
result=fun2(a,n);
printf("s = %d",result);
return 0;

}
