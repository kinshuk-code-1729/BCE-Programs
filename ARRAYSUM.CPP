//Program to find sum of elements in given integer array
#include <stdio.h>
int main()
{
  int m[5],sum,i;
  sum=0;
  printf("Enter five elements for array : ") ;
  for(i=0;i<5;i++)
  { scanf("%d",&m[i]);
    sum=sum+m[i];
  }
  printf("The Sum of five entered numbers is : %d",sum);
  return 0;
}