#include <stdio.h>
#include <math.h>
double fun(int height,int jump_mun)
{   double result;
    for (int i = 1; i <=jump_mun-1 ; i++) {
        result+=height/pow(2,i-1);
    }
    return result;
}
int main() {
    double  a,b,c,d;
    scanf("%lf %lf",&a,&b);
    if(a==0)
    {
        c=0;d=0;
    } else if(b==0)
    {
        c=0;d=0;}
    else {
        c = a / pow(2, b);
        d = fun(a, b) + a;
    }
    printf("%0.1lf %0.1lf",d,c);

    return 0;
}
//#include <stdio.h>
//int main(void)
//{
//    int n=0,time=0;
//    double sum=0,h=0;
//    scanf("%lf %d",&h,&n);
//    while(h!=0&&time<n){
//        sum+=h;
//        time++;
//        h=h/2;
//        sum+=h;
//    }
//    if(n==0){
//        sum=0;
//        h=0;
//    }
//    else
//        sum=sum-h;
//    printf("%0.1f %0.1f",sum,h);
//
//    return  0;
//}