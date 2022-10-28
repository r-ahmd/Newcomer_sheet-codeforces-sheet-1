#include<stdio.h>
#include<math.h>
int main()
{
  
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int max, min;
  max = a;
  min = b;
  if(a<b)
  {
    max = b;
    min = a;
  } 
  if(max<c)
    max = c;
  if(c<min)
    min = c;
  
   printf("%d ", min);
  printf("%d\n", max);
 
   
   return 0;
}
