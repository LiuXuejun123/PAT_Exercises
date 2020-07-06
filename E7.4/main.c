//#include<stdio.h>
//void fun(int a[],int b[],int n,int m)
//{for(int i=0;i<n;i++)
//    {
//    for(int j=0;j<m;j++)
//    {
//        if()
//    }
//    }
//
//}
//int main(){
//    int n,m;
//    scanf("%d",&n);
//    int a[n];
//    for (int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//
//    }
//    scanf("%d",&m);
//    int b[m];
//    for(int j=0;j<n;j++)
//    {
//        scanf("%d",&b[j]);
//    }
//
//    return 0;
//}
#include<stdio.h>
int main(void)
{
    int m,n,i,j,k,idx=0;
    int cnt=0,a[20],count=0;
    scanf("%d",&m);
    int s[20];
    for(i=0;i<m;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&n);
    int t[20];
    for(j=0;j<n;j++){
        scanf("%d",&t[j]);
    }                               //输入两个数组
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(s[i]==t[j]){
                break;
            }
        }
        if(j>=n){
            for(k=0;k<count;k++){
                if(s[i]==a[k]){
                    break;
                }
            }
            if(k>=count){
                a[k]=s[i];
                count++;
            }
        }
    }                               //在s数组里判断有没有和t数组不同的并传给a数组，同时排除传给a的相同部分
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(t[i]==s[j]){
                break;
            }
        }
        if(j>=m){
            for(k=0;k<count;k++){
                if(t[i]==a[k]){
                    break;
                }
            }
            if(k>=count){
                a[k]=t[i];
                count++;
            }
        }
    }                                 // 在t数组里判断有没有和s数组不同的并传给a数组，同时排除传给a的相同部分
    printf("%d",a[0]);
    for(int z=1;z<count;z++){
        printf(" %d",a[z]);
    }
    return 0;
}
