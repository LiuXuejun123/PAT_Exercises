////使用动态内存分配
//#include <stdio.h>
//#include <stdlib.h>
//
//    int main(void)
//    {
//        int i, n, *p;
//        float max, min, s;
//
//        scanf("%d", &n);
//
//        if ((p = (int*)calloc(n, sizeof(int))) == NULL)
//        {
//            exit(1);
//        }
//
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", p+i );
//
//        }
//
//        max = min = s = *p;
//
//        for (i = 1; i < n; i++)
//        {
//            if (max < *(p + i))
//            {
//                max = *(p + i);
//            }
//
//            if (min > *(p + i))
//            {
//                min = *(p + i);
//            }
//
//            s += *(p + i);
//        }
//
//        free(p);
//
//        printf("average = %.2f\nmax = %.2f\nmin = %.2f\n", s / n, max, min);
//
//        return 0;
//    }
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,*p;
    float max,min,sum;
    scanf("%d",&n);
    if((p=(int*)calloc(n,sizeof(int)))==NULL){
        //满足条件说明  not able to allocate memory  无法分配内存
        exit(1); 	//退出整个程序，终止进程，并返回1给操作系统。
        //由于返回0代表程序正常退出，返回1等其他数字通常代表异常终止。可通过返回的具体数值判断出错源。
    }

    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    max=sum=min=*p;
    for(int j=1;j<n;j++)
    {
        if(max<*(p+j))
        {
            max=*(p+j);
        }
        if(min>*(p+j))
        {
            min=*(p+j);
        }
        sum+=*(p+j);
    }
    free(p);
    printf("average = %.2f\nmax = %.2f\nmin = %.2f\n", sum / n, max, min);
    return 0;
}



