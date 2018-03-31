#include <stdio.h>

int main(void)
{
    int test[5] = {29,38,45,23,13};

    printf("value of test[0] is %d\n", test[0]);
    printf("address of test[0] is $p\n", &test[0]);
    printf("value of test is %p\n", test);
    printf("therefore, value of test+1 is %p\n", test+1);
    printf("value of *(test+1) is %d\n", *(test+1));

    return 0;

}
