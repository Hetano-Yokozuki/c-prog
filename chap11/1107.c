#include<stdio.h>

typedef struct Car1{
   int num;
   double gas;
   unsigned int tire : 3;
   unsigned int roof : 1;
   unsigned int color : 4;
}Car1;

typedef struct Car2{
   int num;
   double gas;
   unsigned int tire;
   unsigned int roof;
   unsigned int color;   
}Car2;

int main(void)
{
    printf("size of struct that has bit field is %d\n",sizeof(Car1));
    printf("size of struct that has no bit field is %d\n",sizeof(Car2));

    return 0;
}
