#include <stdio.h>
int a[10]={0};
int b[10];
int n=0;
int temp;
int flag=0;
void bubble_sort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1;j++)
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
}
int main() {
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&temp);
    while(temp!=0)
    {
        flag=temp%10;
        a[flag]++;
        temp=temp/10;
    }
}

printf("")

return 0;
}
