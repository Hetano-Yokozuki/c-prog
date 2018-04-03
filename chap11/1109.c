#include<stdio.h>

typedef struct Car{
    int num;
    double gas;
}Car;

void show(Car *pC);

int main(void)
{
    Car car1 = {0, 0.0};

    printf("pls enter some numbers\n");
    scanf("%d", &car1.num);

    printf("pls charge some gas\n");
    scanf("%lf", &car1.gas);

    show(&car1);

    return 0;
}

void show(Car *pC)
{
     printf("car number is %d: gas is %f\n", pC->num, pC->gas);
}
