#include <stdio.h>
//本题要求编写程序计算某年某月某日是该年中的第几天。
// 全局变量调用函数也能使用   直接存放比较方便
int t[2][13]= {{0,31,28,31,30,31,30,31,31,30,31,30,31},
               {0,31,29,31,30,31,30,31,31,30,31,30,31}
};
int year(int x);
int day(int y,int m,int d );

//输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。
//注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。
int main()  {
    int y,m,d,sum;
    scanf("%d/%d/%d",&y,&m,&d);
    sum=day(y,m,d);
    printf("%d",sum);
    return 0;
}

//判断是否为闰年，true返回1，false返回0
int year(int x){
    return (x%4==0&&x%100!=0)||(x%400==0);
}
//计算天数
int day(int y,int m,int d ){
    int k=0,i=0,count=0;
    if (year(y)){
        k=1;// 闰年选择第二列数据
    }
    for(count=0,i=0;i<m;i++){//累加至上个月的月末
        count+=t[k][i];
    }
    count+=d;//加上本月已过天数
    return count;
}
