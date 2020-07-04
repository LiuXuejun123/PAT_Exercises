#include<stdio.h>
int main(){
    int i,N,M;
    int big,index;
    index=0;
    scanf("%d\n",&N);
    scanf("%d",&big);
    for( i=1;i<N;i++)
    {
        scanf("%d",&M);
        if(M>big)
        {

            big=M;
            index=i;
        }
    }
    printf("%d %d",big,index);
    return 0;
}