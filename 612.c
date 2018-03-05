#include <stdio.h>

int main(void)
{
  int res;
  int i;

  printf("where do you skip?\n");
  scanf("%d", &res);

  for(i=1; i<=10; i++){
     if(i == res)
       continue;
     printf("This loop is no %d\n", i);
}
  return 0;
}
