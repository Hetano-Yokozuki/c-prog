#include <stdio.h>

int main(void){

    int test[5] = {80,60,25,75,90};
    int i;

    for(i=0; i<5; i++){
    printf("person with no %d has %d \n", i+1, test[i]);
}
    return 0;
}
