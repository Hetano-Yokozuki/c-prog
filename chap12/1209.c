#include<stdio.h>

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

    fputs("Hello!\n", fp);
    fputs("Good Bye!\n", fp);
    printf("wrote the file..\n");
    fclose(fp);
    printf("closed a file\n");

    return 0;
}
