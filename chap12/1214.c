#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int test[NUM] = {38,29,48,69,59};
   int i;

   fp = fopen("test1.bin", "wb");

   if(fp == NULL){
      printf("could not open a file\n");
      return 1;
}
   for(i=0; i<NUM;i++){
       fwrite(&test[i], sizeof(int), i, fp);
}
   printf("wrote into a file\n");

   fclose(fp);

   return 0;
}
