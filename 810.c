#include <stdio.h>

int a = 0;

void func(void)
{
     int c = 2;

     printf("we can use a and c in func\n");
     printf("varuable a has %d\n", a);
     /* printf("varuable b has %d\n", b); */
     printf("varuable c has %d\n", c);
}

int main(void)
{
    int b = 1;

     printf("we can use a and b in func\n");
     printf("varuable a has %d\n", a);
     printf("varuable b has %d\n", b); 
     /* printf("varuable c has %d\n", c); */

     func();

     return 0;
}
