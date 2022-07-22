// Program to check the larger number between any two numbers

#include <stdio.h>
int main()
{
  int x,y;
  printf("Enter first number : ");
  scanf("%d",&x);
  printf("\nEnter second number : ");
  scanf("%d",&y);

  if (x>y)
    printf("\n%d is greater than %d",x,y);

  else
   printf("\n%d is greater than %d",y,x);
 return 0 ;
}