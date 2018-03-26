#include <stdio.h>

int main(void)
{
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("value of a is %d\n", a);
    printf("address of a is %p\n", &a);
    printf("pointer pA is %p\n", pA);
    printf("value of pA is %d\n", *pA);

    return 0;
}
