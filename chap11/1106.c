#include<stdio.h>

typedef struct Car{
    int num;
    double gas;
}Car;

int main(void)
{

    printf("size of int is %d\n", sizeof(int));
    printf("size of double is %d\n", sizeof(double));
    printf("size of struct Car is %d\n", sizeof(Car));
    printf("size of pointer for Car is %d\n", sizeof(Car *));

    return 0;
}
