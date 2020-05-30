#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int num;
    int minNum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(0==i) minNum=num;
        else minNum=(minNum>num? num : minNum);
    }
    printf("min = %d\n",minNum);

    return 0;
}
