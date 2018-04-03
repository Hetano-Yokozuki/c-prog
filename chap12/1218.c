#include<stdio.h>
int main(void)
{
    int i;
    int sum = 0;
    fprintf(stderr,"source file name:%s\n", __FILE__);
    fprintf(stderr,"created date:%s\n", __DATE__);
    fprintf(stderr,"created time:%s\n", __TIME__);
    for(i=1; i<=5; i++){
        sum = i + sum;
}
    printf("sum of 1 - 5 is %d\n", sum);
    return 0;
}
