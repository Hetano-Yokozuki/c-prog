#include <stdio.h>

int main(void)
{
    int test[5];
    int i,j;

    printf ("enter points of 5 person..\n");
    for(i=0; i<5; i++){
       scanf("%d", &test[i]);
}
    for(j=0; j<5; j++){
    printf ("person with no. %d has %d point...\n", j+1, test[j]);
}
    return 0;
}
