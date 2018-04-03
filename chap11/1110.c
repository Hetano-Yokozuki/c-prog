#include<stdio.h>

typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
    Car cars[3];
    int i;

    cars[0].num = 1234; cars[0].gas = 24.9;
    cars[1].num = 1261; cars[1].gas = 44.33;
    cars[2].num = 1317; cars[2].gas = 78.9;

    for(i=0; i<3; i++){
    printf("car number is %d: gas is %f\n", cars[i].num, cars[i].gas);
}
    return 0;
}
