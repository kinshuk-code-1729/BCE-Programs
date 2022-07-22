// Program to find factorial of a no. using do while statement
#include <stdio.h>
int main()
{
    int i,n,fact;
    i=1;
    fact=1;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    do
    {
	fact=fact*i;
	i++;
	}
     while(i<=n);
	printf("The factorial of %d is %d",n,fact);
    return 0;
}