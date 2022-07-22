// Program to find table of a number using while statement
#include <stdio.h>
int main()
{
  int n,i,tab;
  i=0;
  printf("Enter any number to get its multiplication table : ");
  scanf("%d",&n);
  printf("\nThe MULTIPLICATION TABLE of %d is :",n);
  while(i<10)
   {
     i++;
     tab=n*i;
     printf("\n%d X %d = %d",n,i,tab);
   }
   return 0;
}