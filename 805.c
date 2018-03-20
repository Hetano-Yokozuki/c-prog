#include <stdio.h>

int buy(int x, int y)
{
    printf("I bought cars costs %d dollers and %d dollers", x, y);
}

int main(void)
{
    int num1,num2;

    printf("how does it cost to bu that car?\n");
    scanf("%d", &num1);
    
    printf("how does it cost to bu this car?\n");
    scanf("%d", &num2);

    buy(num1, num2);

    return 0;
}
