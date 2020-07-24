#include <stdio.h>
#include <string.h>

int main()
{
    char str[81];
    gets(str);
    int n=strlen(str);
    int i;
    char *p;
    for(i=0,p=str;i<n;i++,p++)
    {
        if(*p>='A'&&*p<='Z')
        {
            printf("%c",'A'+'Z'-*p);
        }
        else
            printf("%c",*p);
    }
    return 0;
}


