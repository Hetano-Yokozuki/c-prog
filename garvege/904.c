#include <stdio.h>

void buy(int x)
{
     printf("the new car costs %d yen\n", x);
}

int main(void)
{
    int num;

    printf("how does it cost to buy 1st car?\n");
    scanf("%d", &num);

    buy(num);

    printf("how much will you pay for 2nd car?\n");
    scanf("%d", &num);
  
    buy(num);

    return 0;
}
