#include <stdio.h>

void swap(int *pX, int *pY);

int main(void)
{
    int num1 = 5;
    int num2 = 10;

    printf("value of num1 is %d\n", num1);
    printf("value of num2 is %d\n", num2);

    swap(&num1, &num2);

    printf("value of num1 is %d\n", num1);
    printf("value of num2 is %d\n", num2);

    return 0;
}

void swap(int *pX, int *pY)
{
    int tmp;

    tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}
