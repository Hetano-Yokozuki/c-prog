#include<stdio.h>

int main (void)
{
    int i;
    double d;
    char str[100];

    printf("pls enter integer\n");
    scanf("%d", &i);

    printf("pls enter a few\n");
    scanf("%lf", &d);

    printf("pls enter a string\n");
    scanf("%s", &str);


    printf("Entered integer is %d\n", i);
    printf("Entered few is %lf\n", d);
    printf("Entered String is %s\n", str);

    return 0;
}
