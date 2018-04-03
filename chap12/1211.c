#include <stdio.h>
#define NUM 20

int main(void)
{
    FILE*fp;
    char str1[NUM];
    char str2[NUM];
   
    fp = fopen("test2.txt", "r");

    if(fp == NULL){
       printf("could not open a file...\n");
       return 1;
}
    else{
       printf("opened a file\n");
}

    fgets(str1, NUM-1, fp);
    fgets(str2, NUM-1, fp);

    printf("string written on the file is as below...\n");
    printf("%s",str1);
    printf("%s",str2);

    fclose(fp);
    printf("opened a file\n");

    return 0;
}
