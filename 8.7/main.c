#include<stdio.h>
#include<string.h>

#define M 5
#define N 80
int main()
{

    char str[M][N],tmp[N];
    int i,j;

    for(i=0;i<M;i++){

    scanf("%s",&str[i]);

    }

    for(i=1;i<M;i++){

        for(j=0;j<M-i;j++){

            if(strcmp(str[j],str[j+1])>0){

                strcpy(tmp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],tmp);

            }
        }
    }

    printf("After sorted:\n");

    for(i=0;i<M;i++){

        printf("%s\n",str[i]);

    }

    return 0;

 }