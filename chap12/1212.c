#include<stdio.h>
#define NUM 8

int main(void)
{
    FILE *fp;
    int test[NUM];
    int max, min;
    int i,k;

    fp= fopen("test3.txt", "r");

    if(fp == NULL){
       printf("could not open a file\n");
       return 1;
}
    for(i=0;i<NUM;i++){
        fscanf(fp, "%d", &test[i]);
}
    max = test[0];
    min = test[0];

    for(k = 0; k<NUM;k++){
        if(max < test[k])
               max = test[k];
        if(min > test[k])
               min = test[k];
        printf("No.%-5d%d\n", k+1, test[k]);
}
    printf("max score is %d\n",max);
    printf("minimum score is %d\n",min);

    fclose(fp);
    return 0;
}
