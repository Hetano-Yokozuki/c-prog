#include <stdio.h>

struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   printf("pls enter number\n");
   scanf("%d", &car1.num);
   
   printf("pls charge gas\n");
   scanf("%lf", &car1.gas);

   printf("the number of car is %d: the car has %f liter of gas\n", car1.num, car1.gas);

   return 0;
}
