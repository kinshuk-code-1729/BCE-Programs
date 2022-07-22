// Program to print even pyramid pattern
#include <stdio.h>
int main()
{
 int i,j,n,k;
 printf("Enter the value of rows : ");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 { for(j=1;j<=i;j++)
  {
    printf(" ");
    }
    for(k=0;k<=n-i;k++)
 { printf("* ");
 }
 printf("\n");
 }
 return 0;
 }