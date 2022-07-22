// Program to check whether a number is even or odd
#include <stdio.h>
int main()
{
  int num;
  printf("Enter any number : ");
  scanf("%d",&num);

  if (num%2==0)
  printf("Entered number is even");

  else
  printf("Entered number is odd");
  return 0;
}