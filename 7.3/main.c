#include <stdio.h>
int main() {

    int t,n,i,j,k;
    int a[10][10];
    scanf("%d",&t);
    int count=0;
    int b[100]={0};

    for(k=0; k<t; k++){
        scanf("%d",&n);
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                scanf("%d",&a[i][j]);
            }
        }

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(i>j && a[i][j] != 0){
                    count++;
                }
            }
        }
        if(count==0 ){
            b[k] = 1;
        }else{
            b[k] = 0;
        }
        count=0;
    }

    for(k=0; k<t; k++){
        if(b[k]==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
