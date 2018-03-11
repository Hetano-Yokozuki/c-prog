#include <stdio.h>
#define SUB 2
#define NUM 5

int main(void){
    int test[SUB][NUM];
    int i;

    test[0][0] = 62;
    test[0][1] = 96;
    test[0][2] = 61;
    test[0][3] = 83;
    test[0][4] = 75;
    test[1][0] = 80;
    test[1][1] = 92;
    test[1][2] = 63;
    test[1][3] = 80;
    test[1][4] = 68;

    for(i=0; i<NUM; i++){
    printf("person with %d has %d points for English\n", i+1, test[0][i]);
    printf("person with %d has %d points for Math\n", i+1, test[1][i]);
}
    return 0;
}
