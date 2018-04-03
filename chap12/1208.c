#include <stdio.h>

int main(void)
{
    FILE *fp;
    fp = fopen("test1.txt", "w");

    if(fp == NULL){
       printf("could not open a file\n");
       return 1;
}
    else{
         printf("opened a file\n");
}
    fclose(fp);
    printf("closed the file\n");

    return 0;
}
