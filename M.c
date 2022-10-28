#include<stdio.h>
#include<math.h>
int main()
{
   char chr;
  scanf("%c", &chr);
  
  if(chr>='A' && chr<='Z')
    printf("ALPHA\nIS CAPITAL\n");
    
  else if(chr>='a' && chr<='z')
    printf("ALPHA\nIS SMALL\n");
    
  else if(chr>='0' && chr<='9')
    printf("IS DIGIT\n");
 
   return 0;
}
