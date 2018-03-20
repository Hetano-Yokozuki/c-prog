#include <stdio.h>

int main(void)
{
  int res;
  int i;

  printf("how many loops?\n");
  scanf("%d", &res);

  for(i=1; i<=10; i++){
     printf("%d loop...\n", i);
     if(i == res)
      break;
}
  return 0;
}
