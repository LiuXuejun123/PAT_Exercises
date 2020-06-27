#include <stdio.h>
#include <math.h>
#define eps 1e-5    //0.00001

int main()
{
    double x, sum = 1.0;
    scanf("%lf", &x);
    double result = 1.0;
    int i;
    for (i = 1; ; i++) {
        result = (result * x) / i;
        sum += result;
        if (result < eps) {
            break;
        }
    }
    printf("%.4f", sum);
    return 0;
}

