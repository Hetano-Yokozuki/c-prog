#include <stdio.h>

int max(int x, int y);

int main(void)
{
    int num1, num2, ans;

    printf("pls enter 1st number\n");
    scanf("%d", &num1);

    printf("pls enter 2nd number\n");
    scanf("%d", &num2);

    ans = max(num1, num2);

    printf("max is %d\n", ans);

    return 0;
}

int max(int x, int y)
{
    if (x > y)
       return x;
    else
       return y;
}
