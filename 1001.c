#include <stdio.h>

int main(void)
{
    int test[5] = {80,60,75,33,24};

    printf("value of test[0] is %d\n", test[0]);
    printf("address of test[0] is %p\n", &test[0]);
    printf("value of test[1] is %d\n", test[1]);
    printf("address of test[1] is %p\n", &test[1]);

    return 0;
}
