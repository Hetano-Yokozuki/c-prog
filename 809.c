#include <stdio.h>
#define MAX(x,y) (x > y ? x : y)

int main(void)
{
    int num1, num2, ans;

    printf("pls enter 1st number\n");
    scanf("%d", &num1);

    printf("pls enter 2nd number\n");
    scanf("%d", &num2);

    ans = MAX(num1, num2);

    printf("max is %d\n", ans);

    return 0;
}
