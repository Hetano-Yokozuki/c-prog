#include <stdio.h>

int buy(int x)
{
    printf("This car costs %d\n", x);
}

int main(void)
{
    buy(20);
    buy(50);

    return 0;
}
