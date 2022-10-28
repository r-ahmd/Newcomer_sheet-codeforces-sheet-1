#include<stdio.h>
int main()
{
   double n;
  scanf("%lf", &n);
  int x= (int) n;
  if(n-x>0)
    printf("float %d %.3lf", x, n-x);
  else
    printf("int %d", x);
    
    
   return 0;
}
