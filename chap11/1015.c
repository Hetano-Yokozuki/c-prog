#include <stdio.h>

typedef struct Car{
     int num;
     double gas;
}Car;

int main(void)
{
    Car car1 = {1234, 25.5};
    Car car2 = {1311, 39.5};

    printf("car1 has number %d, gas %flitle\n", car1.num, car1.gas);
    printf("car2 has number %d, gas %flitle\n", car2.num, car2.gas);

    car2 = car1;

    printf("substituted car1 to car2\n");
    printf("car2 has number %d, gas %flitle\n", car2.num, car2.gas);

    return 0;

}
