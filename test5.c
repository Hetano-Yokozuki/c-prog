#include <stdio.h>

int main(void)
{
  int kazu;
  printf("please put a number...\n");

  scanf("%d", &kazu);

  switch(kazu){
   case 1:
    printf("%d is the input\n", kazu);
    break;

   case 2:
    printf("%d is the input\n", kazu);
    break;

   default:
    printf("please input a number...\n");
    break;

}
   return 0;
}
