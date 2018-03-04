#include <stdio.h>

int main(void)
{
  int j, ch;
  ch = 0;
     for(j=0; j<5; j++){
        if(ch == 0){
        printf("%d", j);
        ch =1;
        }
     else{
         printf("-");
         ch = 0;
         }
     }
     printf("\n");
  return 0;
}
