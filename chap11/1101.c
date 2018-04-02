#include <stdio.h>

struct Car{
   int num;
   double gas;
};

int main(void)
{
    struct Car car1;

    car1.num = 1234;
    car1.gas = 25.5;

    printf("car number is %d: gass is fulled in %f\n", car1.num, car1.gas);

    return 0;
}
