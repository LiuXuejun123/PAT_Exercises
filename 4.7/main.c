#include <stdio.h>
int Greatest_common_divisor(int a,int b)
{
int large=0;
int Small=0;
    if(a>b)
    {
        large=a;
        Small=b;
    }
    else
    {
        large=b;
        Small=a;
    }
    for(int i=Small;i>0;i--)
    {
        if((a%i)==0){
            if(b%i==0){
                return i;
            }
        }
    }
}
int Least_common_multiple(int a,int b)
{
    int big=0;
    int small=0;
    if(a>b)
    {
        big=a;
        small=b;
    }
    else
    {
        big=b;
        small=a;
    }
    int time=1;
    int temp=big*time;
    while(temp%small!=0)
    {
        temp=big*time;
        time++;
    }
    return temp;

}
int main() {
int a,b;
scanf("%d %d",&a,&b);
printf("%d %d",Greatest_common_divisor(a,b),Least_common_multiple(a,b));
return 0;
}
