#include<stdio.h>

typedef struct Car{
   int num;
   double gas;
}Car;

void show(Car c);

int main(void)
{
    Car car1 = {0, 0.0};

    printf("pls enter some number\n");
    scanf("%d", &car1.num);

    printf("pls enter some gas\n");
    scanf("%lf", &car1.gas);
    
    show(car1);

    return 0;
}

void show(Car c)
{
     printf("car number is %d: gas is %f\n", c.num, c.gas);
}
