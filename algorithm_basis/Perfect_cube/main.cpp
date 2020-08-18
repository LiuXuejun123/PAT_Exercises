  // a^3=b^3+c^3+D^3
  // perfect cube
#include <iostream>
#include <cstdio>
int main() {
    int N;
    scanf("%d",&N);
    for (int i = 2; i <=N ; ++i)
        for(int j = 2 ; j< i ; ++j)
            for (int k = j; k <i ; ++k)
                for (int l = k; l < i; ++l) {
                        if ((i*i*i)==(j*j*j)+(k*k*k)+(l*l*l))
                        {
                            printf("cude = %d,triple = %d %d %d\n",i,j,k,l);
                        }
                }



    return 0;
}
