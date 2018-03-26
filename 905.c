#include <stdio.h>

int main(void)
{
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("value of a is %d\n", a);
    printf("address of pA is %p\n", &a);

    *pA = 50;

    printf("entered 50 to *pA \n");
    printf("value of a is %d\n", a);
    printf("address of pA is %p\n", &a);

    return 0;

}
