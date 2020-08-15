#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
int factorsum( int number )
{

    int temp=0;
    if (number==1)
        return 1;
    for(int i=number-1;i>0;i--)
        {
            if((number%i)==0)
            {
                temp=temp+i;
            }
        }
    return temp;
}

void PrintPN( int m, int n )
{
    int flag=0;
    int temp=0;
    int count=0;
    for (int i = m; i < n+1 ; i++) {
          if(factorsum(i)==i)
          {
              flag=1;
              temp=0;
              count++;
          }
          if(flag)
          {
              flag=0;
              if(i==1) {
                  printf("1 = 1");
              } else {
                  printf("%d = ", i);
                  for (int j=1;j<i-1;j++)
                  {
                      if ((i%j)==0)
                      {
                          printf("%d",j);
                                   temp+=j;
                          if (temp !=i)
                          {
                              printf(" + ");
                          }
                      }

                  }
              }
              printf("\n");
          }
    }
    if (count==0)
    {
       printf("No perfect number");
    }
}
