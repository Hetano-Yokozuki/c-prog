#include <stdio.h>

int buy(int x, int y)
{
    int z;
    printf("I bought cars costs %d dollers and %d dollers\n", x, y);
    z = x + y;
    return z;
}

int main(void)
{
    int num1,num2,sum;

    printf("how does it cost to bu that car?\n");
    scanf("%d", &num1);
    
    printf("how does it cost to bu this car?\n");
    scanf("%d", &num2);

    sum = buy(num1, num2);
    printf("sum is %d\n", sum);

    return 0;
}
