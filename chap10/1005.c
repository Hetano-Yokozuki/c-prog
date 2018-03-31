#include <stdio.h>

double avg(int t[]);

int main(void)
{
    int test[5];
    int i;
    double ans;

    printf("pls enter 5 values of exam\n");

    for(i=0; i<5; i++){
        scanf("%d", &test[i]);
    }

    ans = avg(test);

    printf("average of points are %lf\n", ans);

    return 0;

}

double avg(int t[])
{
   int i;
   double sum;

   sum = 0.0;

   for (i=0; i<5; i++){
        sum += t[i];
   }
   
   return sum/5;

}
