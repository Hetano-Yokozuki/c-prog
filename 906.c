#include <stdio.h>

void swap(int x, int y);

int main(void)
{
    int num1 = 5;
    int num2 = 10;

    printf("value of num1 is %d\n", num1);
    printf("value of num2 is %d\n", num2);
    printf("swap value of num1 and num2\n");

    swap(num1, num2);

    printf("value of num1 is %d\n", num1);
    printf("value of num2 is %d\n", num2);

    return 0;
}

void swap(int x, int y)
{
     int tmp;

     tmp = x;
     x = y;
     y = tmp;
}
