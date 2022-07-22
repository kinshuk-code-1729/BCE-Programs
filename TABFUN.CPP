// Program to find table of a number using a function
#include <stdio.h>
int n,i=0,tab;
int table()
{
  while(i<10)
   {
     i++;
     tab=n*i;
     printf("\n%d X %d = %d",n,i,tab);
   }
   return 0;
}
int main()
{
  printf("Enter any number to get its multiplication table : ");
  scanf("%d",&n);
  printf("\nThe MULTIPLICATION TABLE of %d is :",n);
  table();
 return 0;
}