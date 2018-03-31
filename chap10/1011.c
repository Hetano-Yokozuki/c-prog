#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("pls enter some string...\n");
    scanf("%s", str);

    printf("the length of the string is %d\n", strlen(str));

    return 0;

}
