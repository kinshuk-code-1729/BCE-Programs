// Program to find sum of odd integers from 1 to n using for loop
#include <stdio.h>
int main()
{
  int n,i,sum;
  sum=0;
  printf("Enter the value of n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i=i+2)
      {  sum = sum+i;
	}
  printf("The Sum of odd numbers from 1 to %d is %d",n,sum);
  return 0;
}