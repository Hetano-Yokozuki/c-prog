#include <stdio.h>

int buy(int x)
{
    printf("This car costs %d\n", x);
}

int main(void)
{
    int num;

    printf("how match does it cost to buy a new car ??\n");
    scanf("%d", &num);

    buy(num);

    return 0;
}
