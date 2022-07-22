// Program to find factorial of a no. using a user defined function
#include <stdio.h>
int i=1,fact=1,n;
int factorial()
{
    while (i<=n)
    {
	fact=fact*i;
	i++;
	}
	printf("The factorial of %d is %d",n,fact);
    return fact;
}
int main()
{
  printf("Enter the value of n : ");
  scanf("%d",&n);
  factorial();

 return 0;
}