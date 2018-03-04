#include <stdio.h>

int main(void)
{
  int kazu, gokei;
  int i;

  kazu = 0;
  gokei = 0;

  printf("how much would you plus\n");
  scanf("%d\n", &kazu); // here

  for(i=1; i<=kazu; i++){
  printf ("%d times...\n", i);
  gokei += i;
}
  printf("%d is gokei\n", gokei);
  return 0;
}
