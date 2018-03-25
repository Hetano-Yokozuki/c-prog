#include <stdio.h>

int a = 0;

void func (void)
{
     int b = 0;
     static int c = 0;

     printf("varuable a has %d and varuable b has %d and varuable c has %d\n", a, b, c);

     a++;
     b++;
     c++;
}

     int main(void)
{
     int i;

     for(i=0; i<5; i++)
        func();

     return 0;
}
