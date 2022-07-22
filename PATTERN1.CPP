// Program to print a square * pattern
#include <stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the value of rows : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n");
  for(j=0;j<n;j++)
    printf("* ");
  }
 return 0;
 }
