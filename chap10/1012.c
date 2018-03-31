#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10];
    char str2[10];

    strcpy(str1, "Hello");
    strcpy(str2, "GoodBye");

    printf("Array str1 is %s\n",str1);
    printf("Array str2 is %s\n",str2);

    return 0;

}
