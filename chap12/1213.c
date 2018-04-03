#include<stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int test[NUM];
   int i,k;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("could not open a file\n");
      return 1;
}

    for(i=0;i<NUM;i++){
        fread(&test[i], sizeof(int), 1, fp);
}

    for(k=0;k<NUM;k++){
        printf("%d\n",test[k]);
}
    fclose(fp);

    return 0;
}
