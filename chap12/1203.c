#include<stdio.h>
int main(void)
{
    double num;
    printf("pls enter number with a few\n");
    scanf("%lf", &num);
    printf("entered number is %.3f in the third decimal place.\n",num);
    return 0;
}
