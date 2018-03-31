#include <stdio.h>
#include <string.h>

int main(void)
{

    char str0[20];
    char str1[10];
    char str2[10];

    strcpy(str1, "Hello");
    strcpy(str2, "Goodbye");
    strcpy(str0, str1);
    strcat(str0, str2);

    printf("Array str1 os %s\n", str1);
    printf("Array str2 os %s\n", str2);
    printf("concatinated array is %s\n", str0);

    return 0;
}
