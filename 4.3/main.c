#include<stdio.h>

int main(void)
{
    int n=0;
    scanf("%d",&n);
    double fenzi=2,fenmu=1,t=0;
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=fenzi/fenmu;
        t=fenzi;
        fenzi=fenzi+fenmu;
        fenmu=t;
    }
    printf("%0.2f",sum);

    return 0;
}