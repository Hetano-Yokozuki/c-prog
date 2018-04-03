#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if(argc !=2){
       printf("number of parameter does not same\n");
       return 1;
}

    fp = fopen(argv[1], "r");

    if(fp == NULL){
      printf("could not open a file\n");
      return 1;
}

    while((ch=fgetc(fp)) != EOF){
      putchar(ch);
}

    fclose(fp);

    return 0;
}
