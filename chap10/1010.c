#include <stdio.h>

int main(void)
{
    char *str[3] = {"Hello","Goodbye","Thank you"};

    int i;

    for(i=0; i<3; i++){
        printf("The string is %s\n",str[i]);
    }

    return 0;

}
