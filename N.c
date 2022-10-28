#include<stdio.h>
#include<math.h>
int main()
{
   char chr;
  int ascii;
  scanf("%c", &chr);
  if(chr>=65 && chr<=90)
  {
    ascii = chr+32;
    printf("%c\n", ascii);
  }
    
  else if(chr>=97 && chr<=122)
  {
    ascii=chr-32;
    printf("%c\n", ascii);
  }
   
 
   return 0;
}
