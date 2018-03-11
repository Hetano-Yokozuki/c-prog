#include <stdio.h>
#define NUM 5

int main(void)
{
  int test[NUM] = {80,90,68,70,59};
  int i;

  for(i=0; i<NUM; i++){
    printf("person no %d has %d point.\n", i+1, test[i]);
}
  return 0;
}
