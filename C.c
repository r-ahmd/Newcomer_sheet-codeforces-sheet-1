#include<stdio.h>
#include<math.h>
int main()
{
   long long int a, b;
   scanf("%lld%lld", &a, &b);
   printf("%lld + %lld = %lld\n", a, b, (a+b));
   printf("%lld * %lld = %lld\n", a, b, (a*b));
   printf("%lld - %lld = %lld\n", a, b, (a-b));
   
   
   return 0;
}
