#include <stdio.h>

int main() {
 int N;
 scanf("%d",&N);
 int Five=N/5;
 int two=N/2;
 int one=N/1;
 int count=0;
 for(int i=Five;i>0;i--)
     for (int j = two; j >0 ; j--)
         for (int k = one; k >0 ; k--)
               if((i*5+j*2+k*1)==N)
             {
                   printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
                   count++;
             }





 printf("count = %d",count);
 return 0;
}
