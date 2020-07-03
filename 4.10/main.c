#include <stdio.h>
int fun(int N)
{
    int result=1;
    for(int i=N-1;i>0;i--)
        {
        result=result+1;
        result=result*2;
        }
    return result;
}
int main() {
    int N;
    scanf("%d",&N);

    printf("%d",fun(N));
    return 0;
}
