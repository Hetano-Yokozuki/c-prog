#include <stdio.h>

typedef struct Car{
        int num;
        double gas;
}Car;

int main(void)
{
    Car car1;

    car1.num = 1234;
    car1.gas = 25.5;

    printf("Car number is %d: Gas is charged %f litle\n", car1.num, car1.gas);

    return 0;
}
