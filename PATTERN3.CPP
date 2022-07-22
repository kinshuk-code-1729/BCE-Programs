// Program to print an inverted right angled triangle * pattern
#include <stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the value of rows : ");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 { for(j=1;j<=i;j++)
  {
    printf("* ");
  }
  printf("\n");
 }
 return 0;
 }
