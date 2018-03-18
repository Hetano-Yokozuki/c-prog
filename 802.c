#include <stdio.h>

int buy(void)
{
    printf("bought a car\n");
}

int main (void)
{
    buy();

    printf("buy additional car\n");

    buy();

    return 0;
}
