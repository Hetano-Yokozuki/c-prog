#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main(void)
{
    int num1, num2, ans;

    printf("pls enter a integer for the 1st number\n");
    scanf("%d", &num1);
    
    printf("pls enter a integer for the 2nd number\n");
    scanf("%d", &num2);

    ans = sum(num1, num2);

    printf("sum is %d\n", ans);

    return 0;

}
