// Program to find table of a number using do while statement
#include <stdio.h>
int main()
{
  int n,i=0,tab;
  printf("Enter any number to get its multiplication table : ");
  scanf("%d",&n);
  printf("\nThe MULTIPLICATION TABLE of %d is :",n);
  do
   {
     i++;
     tab=n*i;
     printf("\n%d X %d = %d",n,i,tab);
     }
   while(i<10);

   return 0;
}