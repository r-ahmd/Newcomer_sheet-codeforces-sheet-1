#include<stdio.h>
int main()
{
    int a, b, c, d;
  long long int sum;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  a = a%100;
  b = b%100;
  c = c%100;
  d = d%100;
  sum = a*b*c*d;
  
   int x = sum % 100;
   if(x<10)
      printf("0%d\n", x);
   else
      printf("%d\n", x);
      
   return 0;
}
