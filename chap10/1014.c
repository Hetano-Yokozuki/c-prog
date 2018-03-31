#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[100];
   char str2[100];

   printf("pls enter first string \n");
   scanf("%s", str1);

   printf("pls enter second string \n");
   scanf("%s", str2);

   if (strcmp(str1, str2) == 0){
       printf("These strings are the same\n");      
}

   else{
       printf("These strings are not same\n");
}

   return 0;

}
