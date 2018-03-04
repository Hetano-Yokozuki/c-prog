#include <stdio.h>

int main(void)
{
  char kazu;
  char moji;

  printf("are you a man? pls input y if yes...\n");
  
  scanf("%c", &kazu);

  moji = (kazu=='y') ? 'M':'W';

   printf("you are %c\n", moji);
}
