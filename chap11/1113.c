#include<stdio.h>

typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week;

int main(void)
{
    Week w;
    w = SUN;

    switch(w){
    case SUN: printf("Sunday\n"); break;
    case MON: printf("Monday\n"); break;
    case TUE: printf("Tueday\n"); break;
    case WED: printf("Wednesday\n"); break;
    case THU: printf("Thursday\n"); break;
    case FRI: printf("Friday\n"); break;
    case SAT: printf("Saturday\n"); break;
    default: printf("cannot decide what day is today..\n"); break;
}
    return 0;
}
