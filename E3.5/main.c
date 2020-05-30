#include <stdio.h>
#include <math.h>
int main() {
float x1,y1,x2,y2,x3,y3;
scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
//double a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
//double b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
//double c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
float a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
float b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
float c=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
if((a+b)>c&&(a+c)>b&&(b+c)>a)
{
    float l=a+b+c;
    float p=l/2;
    float s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("L = %.2lf, A = %.2lf",l,s);

} else
{
    printf("Impossible");
}
return 0;
}
