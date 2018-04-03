#include <stdio.h>
#define DEBUG

int main(void)
{
    int i;
    int sum = 0;
    for(i=1; i<=5;i++){
      #ifdef DEBUG
             fprintf(stderr, "value of sum is %d\n",sum);
      #endif
      sum = i + sum;
}
    printf("sum of 1 to 5 is %d\n", sum);

    return 0;
}
