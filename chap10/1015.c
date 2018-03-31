#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str;
    int num, i;

    printf("how much a do you need ?\n");
    scanf("%d", &num);

    str = (char *)malloc(sizeof(char) * (num+1));
    if(!str){
    printf("could not reserve memory...orz\n");
    return 1;
}

    for(i=0; i<num ; i++){
       *(str+i) = 'a';
}
    *(str+num) = '\0';
    printf("prepared %s\n", str);
    free(str);
    return 0;
}
