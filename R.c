#include<stdio.h>
#include<math.h>
int main()
{
  int n;
   int day, month, year;
   scanf("%d", &n);
   year = n / 365;
   month = (n % 365)/ 30;
   day = (n % 365) % 30;
   
   printf("%d years\n%d months\n%d days", year, month, day);
   
   
   return 0;
}
