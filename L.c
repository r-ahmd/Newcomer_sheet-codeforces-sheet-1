#include <stdio.h>
#include <string.h>
 
int main() 
{
   char f1[1000], s1[1000];
   char f2[1000], s2[1000];
   scanf("%s %s", &f1,&s1);
   scanf("%s %s", &f2,&s2);
   if(strcmp(s1,s2))
      printf("NOT\n");
   else
      printf("ARE Brothers\n");
 
   return 0;
}
