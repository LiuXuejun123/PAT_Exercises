#include <stdio.h>
int m,n;
int a[10][10]={0};
int b[10]={0};
int main(){
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for (int j = 0; j <n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for (int j = 0; j <n ; j++) {
            b[i]+=a[i][j];

        }
    }
    for(int i=0;i<m;i++){
    printf("%d\n",b[i]);}
return 0;
}
