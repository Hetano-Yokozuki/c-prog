#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int num;
   int i;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("could not open a file\n");
      return 1;
}

   printf("which data would you read?(1 - 5)\n");
   scanf("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);
   fread(&num, sizeof(int), 1, fp);

   printf("data that set on%d is %d\n",i,num);
   fclose(fp);
   return 0;
}
