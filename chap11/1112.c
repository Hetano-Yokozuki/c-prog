#include<stdio.h>

typedef union Year{
   int ad;
   int gengo;
}Year;

int main(void)
{
   Year myyear;
   int a, g;

   printf("pls enter Anno Domini\n");
   scanf("%d", &a);
   
   myyear.ad = a;   

   printf("Anno Domini is %d\n", myyear.ad);
   printf("Gengo is %d\n", myyear.gengo);

   printf("pls enter Gengo\n");
   scanf("%d", &g);

   printf("Gengo is %d\n", myyear.gengo);
   printf("Anno Domini is %d\n", myyear.ad);

   return 0;
}
