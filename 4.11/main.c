#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    if(N==1)
		printf("1");
    else{
        int i,count,x1,x2,sum,x;
        sum=2,x1=1,x2=1,x=0;
        for(i=2;x2<N;i++){
            x=x1+x2;
            x1=x2;
            x2=x;
    	}
    	printf("%d",i);
    }

    return 0;
}
