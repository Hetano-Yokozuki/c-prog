#include <stdio.h>
#define NUM 5

int main(void)
{
  int test[NUM];
  int tmp;
  int i, j, s, t;

    printf("pls enter points of %d persons\n", NUM);
    for(i=0; i<NUM; i++){
    scanf("%d", &test[i]);
}

    for(s=0; s<NUM-i; s++){
       for(t=0; t<NUM; t++){
         if(test[t] > test[s]){
          tmp = test[t];
          test[t] = test[s];
          test[s] = tmp;
}
}
}
    for(j=0; j<NUM; j++){
    printf("person with %d has %d point\n", j+1, test[j]);
}
  return 0;
}
