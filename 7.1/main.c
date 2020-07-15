#include <stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[],int len)
{
    int i,j;
    int min;

    for(i=0;i<len-1;i++){
        min=i;
        for(j=i+1;j<len;j++){
            if(arr[j]>arr[min])
                min=j;
        }
//        int temp=arr[i];
//        arr[i]=arr[min];
//        arr[min]=temp;
        swap(&arr[i],&arr[min]);
    }
}
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
void insertion_sort(int arr[],int len)
{
    int i,j,k;
    for(i=1;i<len;i++)
    {
        k=arr[i];
        j=i-1;
        while((j>=0)&&(arr[j]<k)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }


}
int n,i;
int main() {
    int a[10];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

selection_sort(a,n);
    for (int j = 0; j <n-1 ; j++) {
        printf("%d ",a[j]);
    }
    printf("%d",a[n-1]);
    return 0;
}
//#include<stdio.h>
//int main()
//{
//    int i, index, k, n, temp;
//
//    for(k=0; k<n-1; k++){
//        index=k;
//        for(i=k+1; i<n; i++)
//            if(a[i]>a[index])
//                index=i;
//        temp=a[index];
//        a[index]=a[k];
//        a[k]=temp;
//    }
//    printf("%d", a[0]);
//    for(i=1; i<n; i++)
//        printf(" %d", a[i]);
//    return 0;
//}