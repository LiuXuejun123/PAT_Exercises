#include <stdio.h>
int isPrime(int n) {
    int i;
    if (n==1)
    {
        return 0;
    } else{
    for (i = 2; i < n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;}
}
int main() {
    int M,N;
    scanf("%d %d",&M,&N);
    int sum=0;
    int flag=0;
    for(int i=M;i<=N;i++)
    {
        if (isPrime(i))
        {
            sum+=i;
            flag++;
        }
    }
    printf("%d %d",flag,sum);
    return 0;
}
