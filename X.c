#include<stdio.h>
int main()
{
   int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if(c>=a && c<=b)
    if(d>=b)
      printf("%d %d\n", c, b);
    else
      printf("%d %d\n", c, d);
  else if(a>=c && a<=d)
    if(b>=d)
      printf("%d %d\n", a, d);
    else
      printf("%d %d\n", a, b);
  else
    printf("-1\n");
 
   
   
   return 0;
}
