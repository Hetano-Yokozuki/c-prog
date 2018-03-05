#include <stdio.h>

int main(voic){
   int res;
   printf("enter your grade..\n");
   scanf("%d", &res);

   switch(res){
   case 1:
   case 2:
     printf("you still have lots to work on...\n");
     break;

   case 3:
   case 4:
     printf("do not take it easy...\n");
     break;

   case 5:
     printf("good\n");
     break;

   default:
     printf("enter your grade...\n");
     break;
}
   return 0;
}
