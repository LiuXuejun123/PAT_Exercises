#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    int m;
    scanf("%d\n",&m);
    int str[m];
    for(int i=m-1;i>=0;i--)
    {
        scanf("%d",&str[i]);
    }
    printf("%d",str[0]);
    for(int j=1;j<m;j++) {
        printf(" %d",str[j]);
    }
    return 0;
}
