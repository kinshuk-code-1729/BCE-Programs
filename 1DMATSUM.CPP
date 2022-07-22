// Program to get addition of 2 single-dimensional arrays
#include <stdio.h>
int main()
{
  int p[5],q[5],r[5],i;
  printf("\nEnter the elements of the 1st array : ");
  for(i=0;i<5;i++)
  {
   scanf("%d",&p[i]);
  }
  printf("\nEnter the elements of the 2nd array : ");
  for(i=0;i<5;i++)
  {
   scanf("%d",&q[i]);
  }
  for(i=0;i<5;i++)
  {
    r[i]=p[i]+q[i];
  }
 printf("\nThe elements of 1st array are : ");
 for(i=0;i<5;i++)
 {
   printf("%d ",p[i]);
 }
 printf("\nThe elements of 2nd array are : ");
 for(i=0;i<5;i++)
 {
   printf("%d ",q[i]);
 }
 printf("\nThe sum of both the arrays is : ");
 for(i=0;i<5;i++)
 {
  printf("%d ",r[i]);
 }
 return 0;
 }