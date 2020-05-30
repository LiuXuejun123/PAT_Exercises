#include <stdio.h>
#include <math.h>

int main(){
    double mileage;
    int minute;
    double cost;
    int t=0;
    scanf("%lf %d",&mileage,&minute);
    if(minute<5){
        minute=0;
    }else {
        t=minute/5;
    }
    if(mileage<=3){
        cost=10+2*t;
    }else if(mileage>3&&mileage<=10){
        cost=10+(mileage-3)*2+2*t;
    }else if(mileage>10){
        cost=24+(mileage-10)*3+2*t;
    }
    cost=(int)(cost+0.5);

    printf("%.0f",cost);
    return 0;
}

