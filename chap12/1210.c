#include<stdio.h>
#define NUM 5

int main(void)
{
    FILE *fp;
    int test[NUM];
    int i,k;

    fp = fopen("test2.txt", "w");

    if(fp == NULL){
       printf("could not open a file..\n");
       return 1;
}
    else{
       printf("opened a file..\n");
}

    printf("pls enter exam scores of 5 persons\n", NUM);
    for(i=0; i<NUM; i++){
       scanf("%d", &test[i]);
}
    for(k=0;k<NUM;k++){
       fprintf(fp, "No.%-5d%d\n", k+1, test[k]);
}
    printf("wrote into a file\n");

    fclose(fp);
    printf("closed the file\n");

    return 0;
}
