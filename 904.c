#include <stdio.h>

int main(void)
{
    int a, b;
    int *pA;

    a = 5;
    b = 10;

    pA = &a;
    
    printf("value of a is %d\n", a);
    printf("value of pointer pA is %p\n", pA);
    printf("value of *pA %d\n", *pA);
    
    pA = &b;

    printf("value of b is %d\n", b);
    printf("value of pointer pA was changed to %p\n", pA);
    printf("value of *pA is %d\n", *pA);
}
