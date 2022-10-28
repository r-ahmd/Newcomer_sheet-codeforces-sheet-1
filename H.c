#include<stdio.h>
#include<math.h>
int main()
{
  int a, b;
  double sum;
  int c, d, e;
  scanf("%d%d", &a, &b);
  sum = (double)a/b;
  c = floor(sum);
  d = ceil(sum);
  e = round(sum);
   
   printf("floor %d / %d = %d\n", a, b, c);
   printf("ceil %d / %d = %d\n", a, b, d);
   printf("round %d / %d = %d\n", a, b, e);
   
   return 0;
}
