#include <stdio.h>

int main(void)
{
    int test[5] = {80, 50, 30, 20,49};

    printf("value of test[0] is %d\n", test[0]);
    printf("address of test[0] is %p\n", &test[0]);
    printf("value of test is %p\n", test);

    return 0;
}
