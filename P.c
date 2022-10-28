#include<stdio.h>
#include<math.h>
int main()
{
     int n, first; //first is temp 
    scanf("%d", &n);
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }
    if(first%2==0){
       printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
}
