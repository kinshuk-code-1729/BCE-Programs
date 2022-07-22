// Program to find multiplication table of any number using goto statement
#include <stdio.h>
int main()
{
  int i,n,tab;
  i=1;
  printf("Enter any number to find its multiplication table : ");
  scanf("%d",&n);
  printf("\nThe MULTIPLICATION TABLE of %d is :",n);
  label:
  tab=n*i;
  printf("\n%d X %d = %d",n,i,tab);
  ++i;
  if(i<=10) goto label;
  return 0;
}