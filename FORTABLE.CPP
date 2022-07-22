// Program to find multiplication table of any number using for loop
#include <stdio.h>
int main()
{
  int i,n,tab;
  printf("Enter any number to find its multiplication table : ");
  scanf("%d",&n);
  printf("\nThe MULTIPLICATION TABLE of %d is :",n);
  for(i=1;i<=10;i++)
  {
     tab=n*i;
     printf("\n%d X %d = %d",n,i,tab);
  }
  return 0;
}