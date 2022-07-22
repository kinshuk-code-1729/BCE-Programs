// Program to print a mirrored inverted right angled triangle * pattern
#include <stdio.h>
int main()
{
  int n,i,j,k;
  printf("Enter the value of no. of rows : ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
   for(j=n-1;j>=i;j--)
   {
   printf(" ");
   }
   for(k=1;k<=i;k++)
   {
    printf("*");
    }
    printf("\n");
   }
  return 0;
}
