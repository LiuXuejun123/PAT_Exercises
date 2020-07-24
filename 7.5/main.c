#include <stdio.h>
int n;
int a[10][10]={0};
int col=0;
int row=0;
int flag=0;
int main() {
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&a[i][j]);
        }
    }
 if(n==1){
     printf("0 0");
 } else{
     for (int i = 0; i < n; ++i) {
         row=i;
         for (int j = 0; j <n ; ++j) {
             if (a[row][col] <= a[i][j])//在i行  找到任何j列大于，将列数赋值保存，获得i行最大列
             {
                 col = j;
             }
         }
           for(int l=0;l<n;l++)//记录啊a[i][col],全行遍历 证实小，及列最小
           {
               if(a[row][col]>a[l][col])//如果任何一行大于，则跳过
               {   row=l;
                   break;
               }
           }

         if(row==i)
         {
             flag=1;
             break;
         }
     }

     if(flag)
     {
         printf("%d %d",row,col);
     } else{
         printf("NONE");
     }
 }

    return 0;
}
