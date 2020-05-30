#include <stdio.h>

int main() {
int a,b,c,d,f;
a=b=c=d=f=0;
int num,score;
scanf("%d",&num);
for(int i=0;i<num;i++)
    {
   scanf("%d",&score);
   if(score>=90)
   {a++;}
   else if(score<90&&score>=80)
   {b++;}
   else if(score<80&&score>=70)
   {c++;}
   else if(score<70&&score>=60)
   {d++;}
   else if(score<60)
   {f++;}
    }
printf("%d %d %d %d %d",a,b,c,d,f);
return 0;
}
