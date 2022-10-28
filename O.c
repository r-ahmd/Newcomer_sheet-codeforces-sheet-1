#include<stdio.h>
#include<math.h>
int main()
{
   char mathOperator;
   int num1, num2;
  scanf("%d", &num1);
  scanf("%c", &mathOperator);
  scanf("%d", &num2);
  
 
  if(mathOperator=='+')
    printf("%d\n", num1+num2);
  if(mathOperator=='-')
    printf("%d\n", num1-num2);
  if(mathOperator=='*')
    printf("%d\n", num1*num2);
  if(mathOperator=='/')
    printf("%d\n", num1/num2);
   
   
   return 0;
}
