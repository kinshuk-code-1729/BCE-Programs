// Program to print elements of an array in reverse order
#include <stdio.h>
int main()
{
 int r[5],i;
 printf("Enter five elements for array : ");
 for(i=0;i<5;i++)
  { scanf("%d",&r[i]);
  }
 printf("\nThe elements of given array in reverse order are : ");
  for(i=4;i>=0;i--)
  printf("\n%d",r[i]);
  return 0;
 }