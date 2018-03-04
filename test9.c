#include <stdio.h>

int main(void)
{
  int i, j, ch;
  ch = 0;

  for(i=0; i<5; i++){
     for(j=0; j<5; j++){
        if(ch == 0){
        printf("%d", i);
        ch =1;
        }
     else{
         printf("-");
         ch = 0;
         }
     }
     printf("\n");
  }
  return 0;
}
