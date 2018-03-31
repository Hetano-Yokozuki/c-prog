#include <stdio.h>

double avg(int *pT);

int main(void)
{
    int test[5];
    int i;
    double ans;

    printf("pls enter points of 5 person\n");

    for (i=0; i<5; i++){
        scanf("%d", &test[i]);
}
   
    ans = avg(test);

    printf("average of 5 person is %lf\n", ans);
    
    return 0;
}

double avg(int *pT)
{
       int i;
       double sum;

       sum = 0,0;

       for(i=0; i<5; i++){
           sum += *(pT+i);
} 
       return sum/5;
}
