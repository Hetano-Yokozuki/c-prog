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

    return 0;
}
